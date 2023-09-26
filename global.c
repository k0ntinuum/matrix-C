const int R = 64;
const int C = 64;
const int S = 4;
const int B = 16;//should == 2^S
const int text_length = 51; 
const int search_max = 1000;
bool demo = true;

typedef int list[R*C];
typedef int key[R][C];
typedef int set[R*C];
typedef int fn[B];