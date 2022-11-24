N=int(input())
for i in range(N):
    a=0
    j=0
    n=int(input())
    M=input()
    a+=(2*len(M))
    while(len(M)>j):
        if(M.count(M[j])>1):
            a-=(M.count(M[j])-1)
            M=M.replace(M[j],"")
        else:
            j+=1
    print(a)