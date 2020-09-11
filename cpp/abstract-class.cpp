#include "iostream"
#include "bits/stdc++.h"
using namespace std;

class A{
    public:
    void foo(){
        cout<<"A foo"<<endl;
    }

    virtual void foo2()=0;
};

class B: public A{
    public:
    void foo2(){
        cout<<"B foo2"<<endl;
    }
};
int main(){
    // A a; //can't instantiate an abstract class
    B b;
    // a.foo();
    b.foo();
    b.foo2();
    return 0;
}