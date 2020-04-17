# cook your dish here
import sys
data = sys.stdin.read().split("\n")

for k in range(1,int(data[0])+1):
    print(data[k].count('4'))
