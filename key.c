void cut_key(key K) {
    for (int r = 0; r < R ; r++) for (int c =0 ; c < C; c++) K[r][c] = rand()%2;
}
void copy_from_key(key S, const key K) {
    for (int r = 0; r < R ; r++) for (int c =0 ; c < C; c++) S[r][c] =K[r][c];
}

void shift_row(key S, int row, int shift) {
    assert(row < R);int temp[C] = {0};
    for (int c = 0; c < C; c++) temp[c] = S[row][(c + shift)%C];
    for (int c = 0; c < C; c++) S[row][c] = temp[c]; 
}
void shift_col(key S, int col, int shift) {
    assert(col < C);int temp[R] = {0};
    for (int r = 0; r < R; r++) temp[r] = S[(r + shift)%R][col];
    for (int r = 0; r < R; r++) S[r][col] = temp[r]; 
}
void rotate_rows(key S, const fn f, const fn g) {
    for (int r = 0; r < R ; r++) shift_row(S, r, r%2 == 0 ? f[(r/2)%B] : g[(r/2)%B] );
}
void rotate_cols(key S, const fn f, const fn g) {
    for (int c = 0; c < C ; c++) shift_col(S, c, c%2 == 0 ? f[(c/2)%B] : g[(c/2)%B] );
}
void spin_key(key S, int spins) {
    fn f = {0}, g = {0}, h ={0}; 
    for (int i = 0 ; i < spins; i++) {
        fns_from_key(f,g,S);
        rotate_rows(S,g,f);
        rotate_cols(S,f,g);
    }
}


