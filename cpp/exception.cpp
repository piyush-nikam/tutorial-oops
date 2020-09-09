#include "bits/stdc++.h"
#include "iostream"

using namespace std;

int main(){
    int num = 8;
    int deno = 0;

    try{
        if(deno == 0)
            throw deno;
        num = num / deno;
    }catch(int ex){
        cout<<"Caught divide by zero!!"<<endl;
    }
    return 0;
}
