#include "header.h"
string oprst(string a){
    string c;
    for (long long i = 0; a[i] != '\0'; i++){
        if (a[i] == '-'){
            c += "-";
            return c;}
        if (a[i] == '+'){
            c += "+";
            return c;}
    }
    return "0";
}
