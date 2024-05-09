from math import ceil
lst = list(map(int, input().split()))
print(ceil(lst[0]/lst[2]) * ceil(lst[1]/lst[2]))