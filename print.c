void print_symbol(int s) {s == 0 ? printf("O") : printf("|");}
void print_row(const int r[C]) {for (int c =0 ; c < C; c++) print_symbol(r[c]); printf("\n");}
void print_key(key K) {for (int r = 0; r <  R ; r++) print_row(K[r]); printf("\n");}
void print_list(int L[R*C]) {for (int i = 0 ; i < R*C; i++) print_symbol(L[i]); printf("\n");}
void print_fn(fn f) {for (int i = 0 ; i < B; i++) printf("%d ",f[i]); printf("\n");}
void print_list_octals(const list L) {for (int i = 0 ; i < search_max; i++) printf("%d ",octal_from_list(L,i));printf("\n");}



void print_alpha(int i) { if (i < 26) printf("%c ",i+65); else printf("%c ",i - 26 + 49);}

//void print_text(const int* a_text) {for (int i = 0; i < text_length; i++) printf("%X ",a_text[i]);printf("\n");}
//void print_text(const int* a_text) {for (int i = 0; i < text_length; i++) printf("%02x ",a_text[i]);printf("\n");}

void print_text(const int* a_text) {for (int i = 0; i < text_length; i++) print_alpha(a_text[i]);printf("\n");}