/* 1.	Write a program to determine whether the Given Input is Numeric Constant or Not.
e.g. (if 100, 991, 1810 etc are given as an input , then the program says “numeric constant”,
or if we take input as “ABCD”, “A1B2”, then the program will say that this is “not numeric”).*/

#include <iostream>
using namespace std;

bool isNum(){
    string c;
    cin >> c;

    for(int i = 0; i<c.length(); i ++){
        if((c[i] > 47 && c[i] <= 57)){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    if (isNum()) {
        cout <<"Numeric constant.";
    } else {
        cout <<"Not numeric.";
    }
    return 0;   
}

