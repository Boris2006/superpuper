#include "header.h"
string o(string c, string d){
    string a;
    int e, f, k, b = 0, p;
    char r, n;
    p = len(d);
    if (len (c) > len(d)){
        a = o2(c, d);
        return  a;}
    if (len (c) < len(d)){
        a = o3(c, d);
        return  a;}
    for (long long i = len(c); c[i] != '\0'; i--){
        r = c[i];
        n = d[i];
        k = trans(r) + trans(n) + b;
        b = 0;
        if (k >= 10){
            k = k - 10;
            b++;}
        a = trans2(k) + a;}
    if (b != 0){
        a = trans2(b) + a;}
    return a;}
