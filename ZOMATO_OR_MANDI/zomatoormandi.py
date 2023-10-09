zomatoCost=int(input())
mandiCost=int(input())
discountedZomatoCost=int(zomatoCost*0.9)#10% offer
if discountedZomatoCost<mandiCost:
    print(discountedZomatoCost)
    print("ZOMATO")
elif mandiCost<discountedZomatoCost:
    print(mandiCost)
    print("MANDI")
else:
    print(mandiCost)#we can print discountedZomatoCost also
    print("BOTH")