#! /usr/bin/bash

# regex practice for random.txt file

for file_arg
do
	grep -E --color '^(hi){1}(bye){1}' $file_arg
	grep -E --color '^(hi){1}$' $file_arg
	grep -E --color '[yeb]{3}!$' $file_arg
	grep -E --color '^h[iye]{3}!$' $file_arg
	grep -E --color '^(hi){3}\?$' $file_arg
	grep -E --color '[a-z]{5}(hibye)$' $file_arg
	grep -E --color '^(616)-?[0-9]*-+(45)?[0-9]{2}' $file_arg
	grep -E --color '(616)+[123]{3}?4*567$' $file_arg
	grep -E --color '^(hi){4}$' $file_arg
	grep -E --color 'hi(hihihihi){1,100}$' $file_arg
	grep -E --color '^b[ye]{1,2}(bye){2}$' $file_arg
	grep -E --color '\([a-z]+\)' $file_arg
	grep -E --color '^h*(bye)$' $file_arg
	grep -E --color '\) [a-z]{3} [[:alpha:]]{1,12} *\($' $file_arg
	grep -E --color '\(\)$' $file_arg
	grep -E --color '^\( [a-z1-3 ]+ \)$' $file_arg
	grep -E --color '\([a-z 1-3]+.{4}\)' $file_arg
done
