#include<iostream>
using namespace std;

class Base{
    public:
        int a;
        int b;
        
    public:
        Base(int a=10, int b=11){
            this->a = a;
            this->b = b;
            cout << "构造函数生成："<< endl;
            cout << "a:" << a << "b:" << b << endl;
        }
};

int main() {
    Base bb(12, 13);
    cout << "a:" << bb.a << "b:" << bb.b<< endl; 
    return 0;
}