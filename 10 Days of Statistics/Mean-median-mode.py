# Enter your code here. Read input from STDIN. Print output to STDOUT
import pandas as pd
size = int(input())
numbers = pd.Series(map(int, input().split()))
print(numbers.mean())
print(numbers.median())
print(numbers.mode()[0])
