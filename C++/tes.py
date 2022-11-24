def mat(a,b):
    Matrix = [[0 for x in range(a)] for y in range(b)] 
    for i in range(a):
        for j in range(b):
            Matrix[i,j]=int(input())
            print("Masukkan elemen baris ke-")
            j+=1
        i+=1
    return Matrix

mat(3,3)