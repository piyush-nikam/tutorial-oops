#include "bits/stdc++.h"
#include "iostream"

using namespace std;

class Sample{

    public:
    Sample(){};

    int foo(int a, int b){
        return a+b;
    }

    int foo(int a, int b, int c);

    double foo(double a, double b){
        cout<<"double added"<<endl;
        return a+b;
    }

    int foo(int a, double b){
        cout<<"int & double added"<<endl;
        return a+b;
    }

    int foo(double a, int b){
        cout<<"double & int added"<<endl;
        return a+b;
    }
};

int Sample::foo(int a, int b, int c){
    return a+b+c;
}

int main(){
    Sample s = Sample();
    cout<<s.foo(3,5)<<endl;
    cout<<s.foo(3,5,8)<<endl;
    cout<<s.foo(3.0, 5.0)<<endl;
    cout<<s.foo(3, 5.0)<<endl;
    cout<<s.foo(3.0, 5)<<endl;
    return 0;
}
