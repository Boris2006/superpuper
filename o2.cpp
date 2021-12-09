#include "header.h"
string o2(string c, string d){
    string a;
    int e, f, k, b = 0, p;
    char r, n;
    p = len(d);
    for (long long i = len(c); c[i] != '\0'; i-- ){
        r = c[i];
        n = d[p];
        if (p == -1){
            d = "0";}
        k = trans(r) + trans(n) + b;
        b = 0;
        p--;
        if (k >= 10){
            k = k - 10;
            b++;}
        a = trans2(k) + a;}
    if (b != 0){
        a = trans2(b) + a;}
    return  a;}
