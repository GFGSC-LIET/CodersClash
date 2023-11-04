n=int(input())
if n%2!=0:#odd matrix
    print(n*n-(2*n-1))
else:#even matrix
    new_n=n//2
    print(4*(new_n*(new_n+1)//2))
