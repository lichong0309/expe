#include <iostream>
using namespace std;

class Base
{
private:
    // virtual void display() { std::cout << "Base display()" << endl; }
 
    // void say() { cout << "Base say()" << endl; }
 
public:
    virtual void display() { std::cout << "Base display()" << endl; }
    void say() { cout << "Base say()" << endl; }
    void exec()
    {
        display();
        say();
    }
 
    void fun1(string a)
    {
        cout << "Base fun1(string)" << endl;
    }
 
    void fun1(int a)
    {
        cout << "Base fun1(int)" << endl;
    } //overload，两个fun1函数在Base类的内部被重载
};
 
class ChildA : public Base
{
 
private:
    void display() { cout << "ChildA display()" << endl; } //override，基类中的display为虚函数，故此处为重写（覆盖）
public:
    void fun1(int a, int b) { cout << "ChildA fun1(int,int)" << endl; } //redefining，fun1函数在Base类中不为虚函数，故此处为重定义
 
    void say() { cout << "ChildA say()" << endl; } //redefining

    void test_childA() { cout << "ChildA public function" <<endl;}
};
 
class ChildB : public Base
{
 
public:
    void fun1(int a) { cout << "ChildB fun1(int)" << endl; } //redefining
};
 

int main()
{
    ChildA a;
 
    Base *b = &a;
    
    printf("the first test....\n");
    b->exec(); //display():version of DeriveA call(polymorphism) //say():version of Base called(allways )
    

    //b里边的函数display被A类重写（覆盖），say还是自己的
    
    printf("the second test....\n");
    a.exec(); //same result as last statement
    printf("the thrid test...\n");
    a.say();
    cout << "test..." << endl;
    a.Base::display();    // 作用域定义
    

    cout << "test-1...." << endl;
    // b->ChildA::say(); // error, 因为父类不能访问子类的成员,需要在父类中定义为virtual,可以让父类的指针调用子类的函数。
    b->say();  //  output:"Base say()",动态早绑定
    b->display();   // output: "ChildA display()", 因为定义为virtual，所以是动态晚绑定
    return 0;
}