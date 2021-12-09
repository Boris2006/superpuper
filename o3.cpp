#include "header.h"
string o3(string c, string d){
    string a;
    int e, f, k, b = 0, p;
    char r, n;
    p = len(c);
    for (long long i = len(d); d[i] != '\0'; i-- ){
        //p = len(d);
        r = c[p];
        n = d[i];
        if (p == -1){
            c = "0";}
        //cout << trans(r) << " " << trans(n) << endl;
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
