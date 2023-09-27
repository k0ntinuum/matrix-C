const int R = 32;
const int C = 32;
const int S = 3;//size (length) of bit segments
const int B = 8;//base, symbols in alphabet, should == 2^S
const int text_length = 51; 
const int search_max = 1000;
int depth = 150;
bool demo_mode_flag = false;

typedef int list[R*C];
typedef int key[R][C];
typedef int set[R*C];
typedef int fn[B];