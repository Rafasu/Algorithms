n = 7
pascals_triangle = []
for i in range(n):
  pascals_triangle.append([1] * (i+1))

for i in range(2, n):
  for j in range(1, i):
    pascals_triangle[i][j] = pascals_triangle[i-1][j] + pascals_triangle[i-1][j-1]

for elem in pascals_triangle:
  print (elem)