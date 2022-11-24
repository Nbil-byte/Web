a="__ttu537ahR1fhl_us9_fjlett1"
b=[a[i] for i in range (len(a))]
c=""
for i in range(0,27,3):
    b[i]=a[(i+21)%27]
for i in range(1,27,3):
    b[i]=a[(i+15)%27]
for i in range(2,27,3):
    b[i]=a[(i+3)%27]

for i in range(27):
    c+=b[i]
print(c)