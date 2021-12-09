string clear1(string a){
    string b;
    for (long long i = 0; a[i] != '\0'; i++){
        if (a[i] != '-' and a[i] != '+'){
            b += a[i];
        }
    }
    return b;}
