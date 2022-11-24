bil=input("Masukkan bilangan:" )
jml=0
bol=True
for i in range(len(bil)):
    jml+=int(bil[i])
for i in range(len(bil)):
    if(jml%int(bil[i])!=0):
        bol=False
        break

if(bol):
    print("Bravo")
    if(int(bil)%2==0):
        print("Bravo Genap")
else:
    print("Tidak Bravo")
