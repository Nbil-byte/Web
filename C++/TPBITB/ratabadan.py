#input
a=0
#jumlah tinggi badan
sum=0
#banyak siswa
i=0
kondisi=True
while(kondisi):
    a=int(input("Masukkan data: "))
    if(a==(-999)):
        kondisi=False
    elif(a<100 or a>200):
        a=0
    else:
        sum=sum+a
        i+=1

if(i!=0):
    rata=sum/i
    print(rata)
elif(i==0):
    print("Tidak Ada Data")