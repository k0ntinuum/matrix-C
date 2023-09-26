void move_cursor(int r, int c) { printf("\x1b[%d;%dH",r,c);}
void clear_screen() { printf("\x1b[2J");}
void set_blinking() { printf("\x1b[7;m");}
void hide_cursor() { printf("\x1b[?25l");}
void show_cursor() { printf("\x1b[?25h");}
