#Basic Implementation of a Stack using lists
class Stack():
  def __init__(self):
    self.__stack = []
    self.__size = 0
  
  def push(self, item):
    self.__stack.append(item)
    self.__size += 1

  def pop(self):
    if(self.isEmpty()):
      return 0
    self.__size -= 1
    return self.__stack.pop()

  def peek(self):
    return self.__stack[self.__size - 1]

  def isEmpty(self):
    return self.__size == 0

  def size(self):
    return self.__size
    

myStack = Stack()
myStack.push(1)
myStack.push(4)
print (myStack.peek())
print(myStack.isEmpty())
print(myStack.size())




