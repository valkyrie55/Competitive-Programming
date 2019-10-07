#In python
def jumpingOnClouds(c, k):
    index =0
    i= 0
    e =100
    val =0
    n = len(c)
    
    for i in range(0,n):
        i = index
        index = (i+k)%n #cloud to be jumped on
        val = c[index]
        if(val == 1): #thundercloud
            e = e-1-2
        else:
            e = e-1
        if(index == 0):
            break  #back to the first node
    print(e)
    
    
c = [0,0,1,0,0,1,1,0]
k = int(input())
jumpingOnClouds(c,k)
