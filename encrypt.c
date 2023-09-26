void encrypted_from_plain(int* y, int* x, const key K, int depth) {
    key S = {0};
    copy_from_key(S,K);
    int z[2][text_length] ={0};
    copy_text(x,z[0]);
    for (int i = 0; i < depth; i++) {
        spin_key(S,i);
        encoded_from_plain(z[(i+1)%2],z[i%2],K);
        reverse_text(z[(i+1)%2]);
        if (demo) print_text(z[(i+1)%2]);
    }
    copy_text(z[depth%2],y);
}
void plain_from_encrypted(int* y, int* x, const key K, int depth) {
    key S = {0};
    copy_from_key(S,K);
    int z[2][text_length] ={0};
    copy_text(x,z[0]);
    for (int i = 0; i < depth; i++) {
        spin_key(S,i);
        reverse_text(z[i%2]);
        plain_from_encoded(z[(i+1)%2],z[i%2],K);
        if (demo) print_text(z[(i+1)%2]);
    }
    copy_text(z[depth%2],y);
}