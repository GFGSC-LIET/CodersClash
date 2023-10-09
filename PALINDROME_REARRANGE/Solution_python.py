s=input()
d={}
#hashing
for i in s:
    if i in d:
        d[i]+=1
    else:
        d[i]=1
#checking for odd occurences
l=[i for i in d.keys() if d[i]%2!=0]
#if odd occuerncence is more than 1 then it is not possible to rearrange
if len(l)>1:
    print('false')
else:
    print('true')