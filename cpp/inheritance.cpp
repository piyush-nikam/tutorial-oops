#include "bits/stdc++.h"
#include "iostream"

using namespace std;
/*
Inheritance types
1. single lvl: base <- child
2. multi lvl: base <- child1 <- child2
3. multiple: base1 <-child, base2 <- child
4. heirarchial: base <- child1, base <- child2
5. hybrid: base <-child1, base <- child2, (child1, child2) <- child3
*/
class parent{
    public:
        void display(){
            cout<<"parent display"<<endl;
        }
};
class child1: public parent{
    public:
        void display(){
            cout<<"child1 display"<<endl;
        }
};
class child2: public parent{};

int main(){
    parent p; p.display();
    child1 c1; c1.display();
    child2 c2; c2.display();
    
    return 0;
}
