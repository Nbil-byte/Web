A=int(input("Masukkan A:"))
B=int(input("Masukkan B:"))
C=0
ben=True
besar=0

def prima(bil):
    ben=True
    for i in range(2,bil):
        if(bil%i==0):
            ben=False
    return ben

while(B>A):
    if(prima(B)):
        besar=B
        break
    B-=1

print("Prima terbesar adalah",B)