#include "header.h"
string clear2(string a){
    string b;
    long long i = 0;
    while(a[i] == '0'){
        i++;}
    for (long long u = i; a[u] != '\0'; u++){
        b += a[u];}
    return b;
}
