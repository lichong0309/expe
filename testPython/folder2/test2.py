import sys
sys.path.append(r"..")
from folder1 import test1
import main
import test3
def test2Func2():
    test1.test1Func1()
    main.main()
    test3.func3()
    print("test2Func2()")

# if __name__ == "__main__":
#     test2Func2()
test2Func2()