class base(object):
    def __init__(self) -> None:
        self.l = [1,2,3,4]
    def func1(self):
        l2 = self.l
        l2 = [1]
        print("l:", self.l)
        print("l2:", l2)
        return l2
b = base()
b.func1()
print("b.l:", b.l)
c = b
print(c.l)
c.l.append(3)
print(c.l)
print(b.l)