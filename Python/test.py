# a = "li"
# b = "chong"
# c = a 
# a = "LI"
# print(a)
# print(b)
# print(c)

# a = 1
# b = [1,2,3]
# c = b 
# b.append(a)
# print("a:{0},   b:{1},    c:{2}".format(a,b,c))
# a = 2
# print("a:{0},   b:{1},    c:{2}".format(a,b,c))
# print(id(b))
# print(id(b[0]))

list_a = [1,2,3]
list_b = [1,2,3]
print("list_a的地址：", id(list_a))
print("list_b的地址：", id(list_b))

int_a = 1
int_b = 1
print("int_a的地址：", id(int_a))
print("int_b的地址：", id(int_b))

class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        return Vector(self.x + other.x, self.y + other.y)

    def __str__(self):
        return 'Vector(%s, %s)' % (self.x, self.y)


v1 = Vector(1, 3)
v2 = Vector(2, 4)
print(v1 + v2)




