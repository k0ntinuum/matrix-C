void report_small_key() { printf("\n\n!!!%dX%d KEY TOO SMALL FOR %d SYMBOL TEXTS!!!\n\n",R,C,B);exit(1);}
void report_S_B_mismatch() {printf("\n\n!! DISALLOWED SETTINGS 2^%d != %d  (2^S != B) !!\n\n",S,B);exit(1);}
void check_settings() { if  (S != (int)log2((float)B) ) report_S_B_mismatch();}


    