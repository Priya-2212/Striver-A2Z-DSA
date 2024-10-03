int ED(string s1, string s2, int m, int n) {
    if(m == 0) return n;
    if(n == 0) return m;
    if(s1[m-1] == s2[n-1]) {
        return ED(s1, s2, m-1, n-1);
    }
    else{
        return 1 + min(ED(s1, s2, m, n-1), ED(s1, s2, m-1, n),ED(s1, s2, m-1, n-1));
    }
}