#include "iostream"
#include "bits/stdc++.h"

using namespace std;
/*
little endian: last byte is stored first
*/
int main(){
    int i = 1;
    //i => 0000 0000 0000 0001 bigendian
    char* ptr = (char*)&i;

    if(*ptr == 1)
        cout<<"little endian"<<endl;
    else
    {
        cout<<"big endian"<<endl;
    }
    

}