no=input("Masukkan nomor kamar:")
nosave=no
ruang=0
tot=0

while(len(no)>1):
    tot=0
    for i in range(len(no)):
        tot+=int(no[i])
    no=str(tot)
    
print("Kamar ",nosave," akan termasuk ke ruang makan ", no)