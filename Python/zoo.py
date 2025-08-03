ST=input()
l=len(ST)
x=0
y=0
for i in range(l):
    if (ST[i] == 'z' and ST[i+1]=='o'):
        x=x+1
    if (ST[i] == 'o' and i==(l-1)):
        y=y+1
        break
    if (ST[i] == 'z' and ST[i+1]=='z'):
        x=x+1
    if (ST[i] == 'o' and ST[i+1]=='o'):
        x=x+1
    if (ST[i] == 'o' and ST[i+1]=='z'):
        x=x+1
if((2*x)==y):
    print("yes")
else:
    print("no")