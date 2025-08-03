L=[10,40,10,30,40,10,20]
L1=sorted(L)
print(L1)
S=set(L1)
print(S)
c=0
for i in S:
    for j in L1:
        if(i==j):
            c+=1
            
    if(c!=1):
        print("duplicate elements:",i)
    else:
        print("unique elements:",i)
    c=0    
            