n=int(input())
arr=list(map(int,input().split()))
prefix=1
arr.sort()
for x in arr:
    if(x<=prefix):
        prefix+=x
    else:
        break
print(prefix)