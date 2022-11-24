from math import sqrt
def prima(n):
    kobo=True
    if(n==1 or n==0 or n==4):
        kobo=False
    if(n==2):
        kobo=True
    else:
        for i in range(2,int(sqrt(n)+1)):
            if(n%i==0):
                kobo=False
    return kobo

m=int(input("Masukkan nilai M: "))
n=int(input("Masukkan nilai N: "))
jum=0
for i in range(m,n+1):
    prime=False
    j=i
    while(prime==False and j!=0):
        if(prima(j) and i%j==0):
            jum+=j
            prime=True
        j-=1

print("prima=",jum)