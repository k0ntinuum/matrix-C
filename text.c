void randomize_text(int* t) {
    for (int i = 0; i < text_length; i++) t[i] = rand()%B;
}
void copy_text(int* s, int* d) {
    for (int i = 0; i < text_length; i++) d[i] = s[i];
}
void reverse_text(int* t) {
    int r[text_length] = {0};
    for (int i = 0; i < text_length; i++) r[i] = t[text_length - i - 1 ];
    for (int i = 0; i < text_length; i++) t[i] = r[i];
}
bool text_eq(int* s, int* t) {
    for (int i = 0; i < text_length; i++) if (t[i] != s[i]) return false;
    return true;
}