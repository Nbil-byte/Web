iter=0
bil2=0
j=0
jum=0
while j<3:
    iter+=1
    print("Angka ke-",iter)
    bil1=int(input())
    if(bil1>bil2):
        jum+=bil1
        j+=1
    bil2=bil1

print("Jumlah nilai yang membesar adalah: ", jum)