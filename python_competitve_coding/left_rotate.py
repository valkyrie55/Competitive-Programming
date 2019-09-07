def leftrotate(arr, d,n):
	for i in range(d):
		rotate(arr,n)

def rotate(arr,n):
	val = arr[0]
	#shift remaining elements
	for i in range(n-1):
		arr[i] = arr[i+1]
	arr[n-1] = val

def display(arr,n):
	for i in range(n):
		print("%d" %arr[i], end = " ")

d = int(input())
arr = [1,2,3,4,5,6,7]
leftrotate(arr,int(d),len(arr))
#print the array

display(arr,len(arr))