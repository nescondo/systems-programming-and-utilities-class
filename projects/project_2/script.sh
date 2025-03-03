#! /usr/bin/bash

arr=(10 20 40)
tot_runs=$1
i=0

shift
for size in ${arr[@]}
do
	for program in $@
	do	
	python3 $program.py $size $tot_runs >> $program.output
	done
done
