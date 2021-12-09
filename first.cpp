#include "header.h"
string first(string a){
    string c;
    for (long long i = 0; a[i] != '-' && a[i] != '+'; i++){
        c += a[i];
    }
    return c;}
