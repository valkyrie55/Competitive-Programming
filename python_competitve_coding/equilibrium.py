# Python program to find equilibrium index of an array 

def equilibrium(arr): 
	leftsum = 0
	rightsum = 0
	n = len(arr) 

	# until an equilibrium index is found 
	for i in range(n): 
		left_sum = 0
		righ_tsum = 0
	
		# get left sum 
		for j in range(i): 
			leftsum += arr[j] 
		
		# get right sum 
		for j in range(i + 1, n): 
			rightsum += arr[j] 
		
		# if leftsum and rightsum are same return the index
		if leftsum == rightsum: 
			return i 
	
	#if no equilibrium index is found 
	return -1
			
# driver code 
arr = [-7, 1, 5, 2, -4, 3, 0] 
print (equilibrium(arr)) 