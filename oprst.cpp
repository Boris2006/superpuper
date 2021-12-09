#include "header.h"
string oprst(string a){
    //b = "----djdfjdf";
    long long c = 0;
    for (long long i = 0;a[i] == '-' or a[i] == '+'; i++){
        if (a[i] == '-'){
            c++;}}
    if (c % 2 == 0){
        return "+";
    }else{
        return "-";}}
