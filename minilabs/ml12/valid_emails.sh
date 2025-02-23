#! /usr/bin/bash

for arg in $@
do
	grep -E -v '^[a-zA-Z0-9]+[.]?[a-zA-Z0-9]+@[a-zA-Z0-9][a-zA-Z0-9]+|[-.]?[a-zA-Z0-9].[a-zA-Z]{2,5}$' $arg
done
