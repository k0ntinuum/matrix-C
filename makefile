sys: 
	clang -L /opt/homebrew/lib/ -I /opt/homebrew/include/ -lncurses sys.c -o sys
	./sys