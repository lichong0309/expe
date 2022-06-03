#include <iostream>
#include <string>
using namespace std;

void test(string str);
void test(string str){
    cout << str << endl;
    cout << "---------"<< endl;
    str = "chauncey";
    cout << str << endl;
}
int main(){

    string astr = "lichong";
    cout << astr << endl;
    test(astr);
    cout << "--------"<< endl;
    cout << astr << endl;

    int * p;
    int num = 1;
    p = &num ;
    cout << &p << endl;
    cout << p << endl;

    int a[4] = {1,2,3,4};
    int b [][2] = {1,2,3,4,5,6};
    // cout << a << endl;
    // cout << &a << endl;
    // cout << *a << endl;
    cout << a << endl;
    cout << &a << endl;
    cout << &a[0] << endl;
    cout << *a << endl;
    cout << b << endl;
    cout << b[0] << endl;
    cout << &b[0] << endl;
    int num_1 = 1;
    int num_2 = 1;
    int *p_1 = &num_1;
    int *p_2 = &num_2;
    cout << "num_2的地址为："  <<  p_1 << endl;
    cout << "num_1的地址为："  << p_2 << endl;
    

    return 0;
}