#include <iostream>
using namespace std;

class Base
{
    public:
        virtual void test(int a)//有virtual关键字，参数列表不同 
        {
            cout<<"this is base there are different parameters with virtual"<<endl;
            test1();
        }
        
        void test1() 
        {
            cout<<"this is base with the same parameters with not virtual"<<endl;
        }
        
         virtual void test2() 
        {
            cout<<"this is base with the same parameters with virtual"<<endl;
        }
};

class Ship:public Base
{
    public:
        void test()
        {
            cout<<"this is Ship there are different parameters with virtual cover"<<endl;
        }
        
        void test1() 
        {
            cout<<"this is Ship with the same parameters with not virtual cover"<<endl;
        }
        
        void test2() 
        {
            cout<<"this is Ship with the same parameters with virtual cover"<<endl;
        }
};

int main()
{
    Ship s;
    Ship s_1 = Ship();
    s.test();
    s.test1();
    s.test2();
    s_1.test();
    return 0;
}
