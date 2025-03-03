import argparse
import time
import random
import math

parser = argparse.ArgumentParser()
parser.add_argument("n",type=int)
parser.add_argument("repeats",type=int)

args = parser.parse_args()
n = args.n
repeats = args.repeats

time_start = time.time()
for j in range(repeats):
    vals = []
    for i in range(n):
        numerator = math.factorial(2*n)
        denominator = math.factorial(n+1) * math.factorial(n)
        vals.append(numerator//denominator)
time_end = time.time()
avg_time = (time_end-time_start)/repeats
print(f'{n},{vals[-1]}')
print(f'{n},{avg_time}')
