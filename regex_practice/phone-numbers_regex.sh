#! /usr/bin/bash

# script to match each line in phone-numbers.txt using regex

for file_arg
do
	grep -E --color '[616]{3}-[5]{3}-[5]{4}' $file_arg
	grep -E --color '[0-9]{3}-[[:digit:]]{3}-[1]{1,4}' $file_arg
	grep -E --color '[0]{1,3}-[0-9]{3}-[[:digit:]]{4}' $file_arg
	grep -E --color '[0-8]{9}9' $file_arg
	grep -E --color '[123]{1,3}-[[:digit:]]{1,10}-[789]{3}' $file_arg
	grep -E --color '[[:alpha:]]{9}[j]$' $file_arg
	grep -E --color '[a-z0-9]{9}[9]$' $file_arg
	grep -E --color '2{10}' $file_arg
	grep -E --color '3{3}0{1}1{6}' $file_arg
	grep -E --color '\([616]{3}\)[0-9]{3}-5{1,100}' $file_arg
	grep -E --color '\([0-9]{3}\)[2]{1}11-1{4}' $file_arg
	grep -E --color '\(111\)1{3}-[[:alnum:]]{1,1000}' $file_arg
done
