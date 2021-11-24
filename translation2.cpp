long long  translation2(string e){
    long long c, d = 0;
    c = len(e);
    for (long long i = 0; e[i] != '\0'; i++){
        if (e[i] == '0'){
            d += 0 * degree(c);
            c--;}
        if (e[i] == '1'){
            d += 1 * degree(c);
            c--;}
        if (e[i] == '2'){
            d += 2  * degree(c);
            c--;}
        if (e[i] == '3'){
            d += 3 * degree(c);
            c--;}
        if (e[i] == '4'){
            d += 4 * degree(c);
            c--;}
        if (e[i] == '5'){
            d += 5 * degree(c);
            c--;}
        if (e[i] == '6'){
            d += 6 * degree(c);
            c--;}
        if (e[i] == '7'){
            d += 7 * degree(c);
            c--;}
        if (e[i] == '8'){
            d += 8 * degree(c);
            c--;}
        if (e[i] == '9'){
            d += 9 * degree(c);
            c--;}
    }
    d = d / 10;
    return d;
}
