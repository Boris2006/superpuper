#include "header.h"
string second(string a){
    string c;
    bool b = 0;
    for (long long i = 0; a[i] != '\0'; i++){
        if (a[i-1] == '-' or a[i-1] == '+' and a[i] != '+' and a[i] != '-'){
            b = 1;}
        if (b == 1){
            c += a[i];
        }
    }
    return c;}
