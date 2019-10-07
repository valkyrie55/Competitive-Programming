#extraLongFactorials 
#https://www.hackerrank.com/challenges/extra-long-factorials/problem?isFullScreen=false&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
def extraLongFactorials(n):
    res = n
    for i in range(n-1,0,-1):
        #print(i)
        res = res*i
    print(res)
n = 20
extraLongFactorials(n)
