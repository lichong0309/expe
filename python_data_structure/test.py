# class base(object):
#     def __init__(self) -> None:
#         self.l = [1,2,3,4]
#     def func1(self):
#         l2 = self.l
#         l2 = [1]
#         print("l:", self.l)
#         print("l2:", l2)
#         return l2
# b = base()
# b.func1()
# print("b.l:", b.l)
# c = b
# print(c.l)
# c.l.append(3)
# print(c.l)
# print(b.l)


# l = [[1,2,3,4,5]]
# print(l[0])
# for i in l:
#     print(i)
#     i[0] = 2
# print(l)

def heapify(arr, n, i): 
    largest = i  
    l = 2 * i + 1     # left = 2*i + 1 
    r = 2 * i + 2     # right = 2*i + 2 
  
    if l < n and arr[i] < arr[l]: 
        largest = l 
  
    if r < n and arr[largest] < arr[r]: 
        largest = r 
  
    if largest != i: 
        arr[i],arr[largest] = arr[largest],arr[i]  # 交换
  
        heapify(arr, n, largest) 
  
def heapSort(arr): 
    n = len(arr) 
  
    # Build a maxheap. 
    for i in range(n, -1, -1): 
        heapify(arr, n, i) 
  
    # 一个个交换元素
    for i in range(n-1, 0, -1): 
        arr[i], arr[0] = arr[0], arr[i]   # 交换
        heapify(arr, i, 0) 
  
arr = [ 12, 11, 13, 5, 6, 7] 
heapSort(arr) 
n = len(arr) 
print ("排序后") 
for i in range(n): 
    print ("%d" %arr[i]),
