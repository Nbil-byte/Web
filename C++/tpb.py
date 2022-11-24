bil=int(input("Masukkan banyaknya bilangan:"))
lis=["" for i in range(bil)]
lis2=[]
baru=0
max=0
for i in range(bil):
    print("Masukkan bilangan ke-",i+1)
    lis[i]=(input())

k=int(input("Masukkan nilai K:"))
jumlah=0

for i in range(bil):
    if(len(lis[i])>=k):
        lis2.append(lis[i])

print(lis)
for i in range(len(lis2)):
    jumlah+=int(lis2[i][k-1])

print(lis2)

print("Jumlah dari semua digit ke-",k," adalah ",jumlah)