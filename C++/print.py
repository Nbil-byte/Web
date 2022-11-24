#input
JP=int(input("Masukkan banyak pegawai:"))

#gaji kumulatif
gaj=0

for i in range(JP):
    nama = str(input("Masukkan Nama :"))
        jamhari = int(input("Masukkan Jam/Hari:"))
        hari = int(input("Masukkan Hari:"))
        gaji = 100000
        jam = jamhari * hari
        #menghitung rumus
        if jam < 7 :
            rumus = 0
        elif (jam >= 40):
            if jam>70:
                jam=70
            lembur = jam - 40
            rumus = 40 * gaji + (lembur * 150000)
        else:
            rumus = gaji * (jam)
        gaj+=rumus
        print(rumus)