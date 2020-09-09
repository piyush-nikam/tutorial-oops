#include "bits/stdc++.h"
#include "iostream"

using namespace std;

class Class1{
    private:
        int i;
    public:
    Class1(){
        i = 8;
    }
    
    void display(){
        cout<<i<<endl;
    }

    friend void display2(Class1 &obj1);    
};

void display2(Class1 &obj1){
    cout<<obj1.i<<endl;
}

int main(){
    Class1 obj;
    obj.display();
    display2(obj);
    return 0;
}
