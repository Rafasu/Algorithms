#Optimized Bubble Sort. 

def swap(array, i, j):
	temp = array[i]
	array[i] =  array[j]
	array[j] = temp

	return 

def bubbleSort(array):
	n =  len(array)
	change = True
	i = 0

	while(change):
		i += 1
		change = False

		for  j in range(0, n - i -1):
			if(array[j] > array[j+1]):
				swap(array, j, j+1)
				change =  True

	return

def printA(array):
	n = len(array)
	for i in range (n) : 
		print array[i],
	print 

	return 


#Global Variables.
testArray = [1, -2, 0, 8, 9]


#Main
printA(testArray)
bubbleSort(testArray)
printA(testArray)

