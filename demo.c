void demonstrate_system() {
    demo = true;
    srand(time(NULL));
    key K;cut_key(K);print_key(K);
    int depth = 10;
    int p[text_length] = {0};
    int c[text_length] = {0};
    int d[text_length] = {0};
    randomize_text(p);
    print_text(p); printf("\n");print_text(p);
    encrypted_from_plain(c, p, K, depth);
    printf("\n");
    print_text(c);
    plain_from_encrypted(d, c, K, depth); printf("\n");
    print_text(d); 
    if (text_eq(p,d)) printf("SUCCESSFUL DECRYPTION (DEPTH = %i) \n",depth);
    else printf("DECRYPTION FAILED (DEPTH = %i) \n",depth);
}
void wait_for_key() {
    char c; scanf("%c", &c);
    if (c=='q') exit(0);
}
void animate_key() {
    key S;key T;cut_key(S);
    clear_screen();
    hide_cursor();
    for (int i = 0; i < 100; i++) {
        copy_from_key(T,S);
        spin_key(S,1);
        move_cursor(0,0);
        print_key(S);
        show_cursor();
        wait_for_key();
        hide_cursor();
    }

}