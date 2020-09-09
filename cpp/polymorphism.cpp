#include "iostream"
#include "bits/stdc++.h"

using namespace std;

/*
polymorphism: 
    1. Compile time - Overloading 
    2. Runtime - Overriding
*/

class base{
    public:
        static void display(){
            cout<<"base"<<endl;
        }
};

class derived: public base{
    public:
        // void display(){
        //     cout<<"derived"<<endl;
        // }
};

int main(){
    base b;b.display();
    derived d; d.display();
    base::display();
    derived::display();
    return 0;
}