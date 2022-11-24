def mat(a,b):
    Matrix = [[0 for x in range(b)] for y in range(a)] 
    for i in range(a):
        for j in range(b):
            print("Masukkan elemen baris ke-",i+1,",",j+1)
            inp=int(input())
            Matrix[i][j]+=inp
            j+=1
        i+=1
    return Matrix

def E(a,b):
    