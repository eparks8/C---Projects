#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "display.h"
#include "fstr.h"

int main(int argc, char *argv[]) {
    enum { BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE };
    fstr f("Test",BLUE);
    std::cout << f.get_base() << std::endl;
    std::cout << f.get_color() << std::endl;
    std::cout << f.get_f() << std::endl;
    std::string s = "\x1B[" + std::to_string(BLACK) + "m" + "Hello" + "\033[0m\n"; 
    std::cout << s;
    //printf("\x1B[31mTexting\033[0m\t\t");
    return 0;
}