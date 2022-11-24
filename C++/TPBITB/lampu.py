papan=int(input("papan: "))
tekan=int(input("tekanan: "))

lampu=[[False for i in range(papan)] for j in range(papan)]
koor=[[0 for i in range(2)] for j in range(tekan)]

for i in range(tekan):
    print("Masukkan baris tekanan ke",i+1,":")
    koor[i][0]=int(input())-1
    print("Masukkan kolom tekanan ke",i+1,":")
    koor[i][1]=int(input())-1
    for j in range(papan):
        lampu[koor[i][0]][j]=not lampu[koor[i][0]][j]
    for j in range(papan):
        lampu[j][koor[i][1]]=not lampu[j][koor[i][1]]
    
    lampu[koor[i][0]][koor[i][1]]= not lampu[koor[i][0]][koor[i][1]]

for i in range(papan):
    for j in range(papan):
        if(lampu[i][j]):
            lampu[i][j]="O"
        else:
            lampu[i][j]="X"

for i in range(papan):
    print(lampu[i])
    
