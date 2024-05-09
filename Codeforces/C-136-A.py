num = int(input())
mappedDict = dict((i,Pi) for (i, Pi) in enumerate(list(map(int, input().split()))))
for i in dict(sorted(mappedDict.items(), key=lambda x:x[1])).keys():
    print(i+1, end=" ")