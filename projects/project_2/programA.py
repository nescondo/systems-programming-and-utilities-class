import argparse
import time
import random

parser = argparse.ArgumentParser()
parser.add_argument("n",type=int)
parser.add_argument("repeats",type=int)

args = parser.parse_args()
n = args.n
repeats = args.repeats

time_start = time.time()
for j in range(repeats):
    vals = [2,1]
    for i in range(n):
        if i >= 2:
            vals.append(vals[-1] + vals[-2])
time_end = time.time()
avg_time = (time_end-time_start)/repeats
print(f'{n},{vals[-1]}')
print(f'{n},{avg_time}')
