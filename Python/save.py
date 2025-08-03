y=0
x=0
A=input()
L=len(A)
if((L<=20) and (A[0]=='z')):
    for i in range(L):
        if(A[i]=='z' or A[i]=='o'):
            if(A[i]=='z'):
                x=x+1
            if(A[i]=='o'):
                y=y+1
    if((2*x)==y):
        print("yes")
    else:
        print("no")
