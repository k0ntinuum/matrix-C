void inverse(fn q, fn f) {
    for (int i = 0 ; i <  B; i++) q[f[i]] = i;
}
void composition(fn h, const fn f, const fn g) {
    for (int i = 0; i < B; i++) h[i] = f[g[i]];
}

void shift_fn(fn f, int c) {
    fn t ={0};
    for (int i = 0; i < B; i++) t[i] = f[(i+c)%B];
    for (int i = 0; i < B; i++) f[i] = t[i];
}

void fn_from_list(fn f, const list L) {
    int p = 0;int x = 0;set have = {};
    for (int arg = 0 ; arg < B ; arg++) {
        x = value_from_list(L,p++);
        for (;have[x] && p < search_max;) x = value_from_list(L,p++);
        if (p >= search_max) report_small_key();
        have[x] = true;f[arg] = x;
    }
}
void fns_from_key(fn f, fn g, key K) {
    list L = {0};
    list_from_key(L,K,true);
    fn_from_list(f,L);
    reverse_list(L);
    fn_from_list(g,L);
}