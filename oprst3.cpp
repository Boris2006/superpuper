#include "header.h"
string oprst3(string a){
    long long c = 0, d = 0;
    //cout << a << endl;
    for (long long i = 0; a[i] != '\0'; i++){
        if (a[i] == '-'){
            c++;}
        if (a[i] == '+'){
            d++;}}
    //cout << a << endl;
    if (c % 2 == 0){
        return "+";}
    if (c % 2 == 1){
        return "-";}}
