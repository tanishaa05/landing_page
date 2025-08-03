T=int(input("NUMBER OF TEST CASES"))
if((T>=1)and(T<=100)):
    for i in range (1,T+1):
        X=int(input("HOW MUCH MONEY TOP 10 PARTICAPNTS GET"))
        Y=int(input("HOW MUCH MONEY TOP 11 TO 100 PARTICAPNTS GET"))
        if((X>=1)and(X<=1000)and(Y>=1)and(Y<=1000)):
            R1=(10*X)
            R2=(90*Y)
            total=(R1+R2)
            print(total)
