#include "bits/stdc++.h"
#include "iostream"

using namespace std;

struct emp{
    string name;
    int age;
    string nationality;
}emp;

int main(){
    emp.name = "name";
    emp.age = 25;
    emp.nationality = "Indian";

    cout<<emp.name<<endl<<emp.age<<endl<<emp.nationality<<endl;

    return 0;
}
