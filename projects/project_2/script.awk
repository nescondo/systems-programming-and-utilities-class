#! /usr/bin/gawk -f

BEGIN {
	FS=","
	DD_num=0
	tot_accs=0
	fri_sat_accs=0
	tot_mi_accs=0
	d_mi_accs=0
	dark_mi_accs=0
}
NR>=2 && $52 >= 1 {DD_num += 1}
NR>=2 {tot_accs += 1}
NR>=2 && ($15 == 6 || $15 == 7) {fri_sat_accs += 1}
NR>=2 && ($1 == 26) {tot_mi_accs += 1}
NR>=2 && ($1 == 26 && $52 >= 1) {d_mi_accs += 1}
NR>=2 && ($1 == 26 && ($36 == 2 || $36 == 3 || $36 == 6)) {dark_mi_accs += 1}
NR>=2 {st_accs[$1] += $9}
END {
print("DD Proportion:", DD_num/tot_accs)
print("Friday/Saturday Proportion:", fri_sat_accs/tot_accs)
print("MI DD Proportion:", d_mi_accs/tot_mi_accs)
print("MI Dark Proportion:", dark_mi_accs/tot_mi_accs)
print "State Code,# People"
for (state in st_accs) print(sprintf("%d,%d", state,st_accs[state]))
}
