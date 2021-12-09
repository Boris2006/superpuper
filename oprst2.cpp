#include "header.h"
string oprst2(string a){
    string s = a;
    for (long long i = 0; a[i] == '-' or a[i] == '+'; i++){
        s = "";
        for (long long g = i + 1; a[g] != '\0'; g++){
            s += a[g];
        }
    }
    return s;
}
