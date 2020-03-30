#In Case that recursion depth is not enough uncomment lines below
# import sys
# sys.setrecursionlimit(1500)

def merge(listNums, start, middle, end):
        temp = []
        i = start
        j = middle + 1 
        k = 0
        while(i <= middle and j <= end):
            if(listNums[i] < listNums[j]):
                temp.append(listNums[i])
                i += 1
            else:
                temp.append(listNums[j])
                j += 1
            k += 1
        while(i <= middle):
            temp.append(listNums[i])
            k += 1
            i += 1
        while(j <= end):
            temp.append(listNums[j])
            k += 1
            j += 1
        print(temp)
        for i in range(start, end+1):
            listNums[i] = temp[i - start]

def mergeSort(listNums, start, end):
    if(start < end):
        middle = (start + end) // 2
        mergeSort(listNums, start, middle)
        mergeSort(listNums, middle+1, end)
        merge(listNums, start, middle, end)
    return     

# Main
numberList = [9, 7, 8, 3, 2, 1]
print(numberList)
mergeSort(numberList, 0, 5)
print (numberList)
