L=[10,40,10,30,40,10,20]
L1=sorted(L)
print(L1)
c=1
max=1
for i in range(len(L1)):
    if (L1[i]==L1[i+1]):
        c+=1
        
    else:
        print(L1[i],"=",c,"times")
        if(c>max):
            max=c
            print("element",L1[i],"maximum frequency is",max)
            c=1
