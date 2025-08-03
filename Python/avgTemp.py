n=int(input("enter number of states:"))
s=0
stud={}
for i in range(1,n+1):
     st=input("enter name of state:")
     for j in range(1,13):
          temp=int(input("enter temparatures for 12 months:"))
          s=s+temp
     print(s)
     stud[n]={"State":st,"average temparature":s}
for k1,v1 in stud.items():
     print(stud[k1])
