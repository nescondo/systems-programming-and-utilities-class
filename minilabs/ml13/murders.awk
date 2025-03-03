#! /usr/bin/gawk -f

BEGIN {
	FS=","
	num_cities=0
	tot_change=0
}
NR>=2 && $3 > 200 {num_cities += 1}
NR>=2 {state[$2]=$5}
NR>=2 {tot_change += $5}
END {
print(num_cities)
print(tot_change)
}

