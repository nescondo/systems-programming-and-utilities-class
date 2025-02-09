#! /usr/bin/bash

wget https://kdd.ics.uci.edu/databases/20newsgroups/20_newsgroups.tar.gz
wget https://www.mit.edu/~ecprice/wordlist.10000
wget wget https://raw.githubusercontent.com/cis241-gvsu/w25-classmaterial/refs/heads/main/misc-files/project1/stopwords.txt
tar -zxf 20_newsgroups.tar.gz
cat ./20_newsgroups/rec.sport*/* > rec_sport.txt
cat ./20_newsgroups/comp.sys*/* > comp_sys.txt
iconv -f utf-8 -t utf-8 -c rec_sport.txt > utf8_sport.txt
iconv -f utf-8 -t utf-8 -c comp_sys.txt > utf8_comp.txt
cat utf8_sport.txt | tr -d [:punct:] > punct_sport.txt
cat utf8_comp.txt | tr -d [:punct:] > punct_comp.txt
cat punct_sport.txt | tr -c [:alnum:] "\n" > one_sport.txt
cat punct_comp.txt | tr -c [:alnum:] "\n" > one_comp.txt
sort -f one_sport.txt > sort_sport.txt
sort -f one_comp.txt > sort_comp.txt
cat sort_sport.txt | uniq -ic > uniq_sport.txt
cat sort_comp.txt | uniq -ic > uniq_comp.txt
grep -iFw -f wordlist.10000 uniq_sport.txt > word_sport.txt
grep -iFw -f wordlist.10000 uniq_comp.txt > word_comp.txt
grep -ivwF -f stopwords.txt word_sport.txt > stop_sport.txt
grep -ivwF -f stopwords.txt word_comp.txt > stop_comp.txt
sort -r stop_sport.txt > almost_done_sport.txt
sort -r stop_comp.txt > almost_done_comp.txt
cat almost_done_sport.txt | tr [:upper:] [:lower:] > final_sport.txt
cat almost_done_comp.txt | tr [:upper:] [:lower:] > final_comp.txt
echo "BEGIN MOST COMMON SPORTS"
head -8 final_sport.txt
echo "BEGIN MOST COMMON COMPUTERS"
head -8 final_comp.txt
