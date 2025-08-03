stud={}
i=1
res='y'
while res=='y':
    roll=int(input("enter roll:"))
    name=input("enter name:")
    marks=int(input("enter marks:"))
    stud[i]={"roll":roll,"name":name,"marks":marks}
    i+=1
    res=input("wish to continue:[y/n]")
print("all students details are:")
for k1,v1 in stud.items():
    print(stud[k1])
    print(v1["marks"])
    for k2,v2 in v1.items():
        print(k2,"->",v2)
        print(marks)
        print(v1["marks"])