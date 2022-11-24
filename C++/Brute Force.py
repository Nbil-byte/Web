#Brute Force Programming

#nilai max
def maximal(namalist):
    max=namalist[0]
    for i in range(namalist.size()):
        if(max<namalist[i]):
            max=namalist[i]
    return max

#nilai min
def minimal(namalist):
    min=namalist[0]
    for i in range(namalist.size()):
        if(min>namalist[i]):
            min=namalist[i]
    return min

#sequantial search
def seq_search(elemen,namalist[]):
    ada=-1
    for i in range(namalist.size()):
        if(namalist[i]==elemen):
            ada=i
            break
    return ada

