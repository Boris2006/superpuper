#include "header.h"
int main(){
    string a, c, d, m, b, f;
    cout << "Enter an example" << endl;
    cin >> a;
    while(a != "stop"){
            cout << "Your answer" << endl;
            b = oprst(a);
            //cout << b;
            a = oprst2(a);
            f = oprst3(a);
            c = first(a);
            c = clear2(c);
            d = second(a);
            d = clear1(d);
            d = clear2(d);
            if (b == "-" and f == "-"){
                cout << "-" + o(c, d) << endl;}
            if (b == "+" and f == "+"){
                cout << o(c, d) << endl;}
            if (b == "+" and f == "-"){
                if (len(c) > len(d)){
                    cout << vichitanie(c, d) << endl;
                }
            }
            }

    return 0;
}
