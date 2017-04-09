def swap(array, i, j):
	temp = array[i]
	array[i] = array[j]
	array[j] =  temp

	return

def bubbleSort(array):
	#Number of elements.
	n = len(array)

	#Repeat n-1 times.
	for i in range(n):

		#Traverse the array from 0 to n-i-1
		#Swap if adyacent element is greater.
		for j in range(0, n - i -1):
			if(array[j] > array[j+1]):
				swap(array,j, j+1)
	return 

def printA(array):
	n = len(array)
	for  i in range(n):
		print("%d" %array[i]),
	print ("\n")
	return 

#Global variables
testArray = [1, 5, -1, 8, 2]

###################Main

#Array before sorting.
printA(testArray)

bubbleSort(testArray)

#Sorted array.
printA(testArray)

