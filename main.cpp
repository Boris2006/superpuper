#include "header.h"
int main()
{
    string a, b;
    char c;
    cin >> a;
    //b = oprst(a);
    for (long long i = 0; a[i] != '-' && a[i] != '+'; i++){
        c = a[i];
        cout << trans(c);
    }
    //cout << b;
    return 0;
}
