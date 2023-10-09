n, m = list(map(int, input().strip().split()))
inputLine = list(map(int, input().strip().split()))
arr = [[0 for j in range(m)] for i in range(n)]
for i in range(n):
    for j in range(m):
        arr[i][j] = inputLine[i * m + j]
c=0
index=-1
for i in range(n):
    a=arr[i].count(1)
    if a>c:
        c=a
        index=i 
print(index)