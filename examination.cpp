bool examination(string a){
    bool b = 0;
    string d = "0123456789*-+";
    for (long long c = 0; a[c] != '\0'; c++){
        for (long long e = 0; d[e] != '\0'; e++){
            if (a[c] != d[e]){
                return b;}}}
    return b = 1;

}


