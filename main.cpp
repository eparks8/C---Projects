#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "display.h"
#include "fstr.h"

int main(int argc, char *argv[]) {
    enum { BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE };
    Display d;
    d.set_buff(fstr("Test",RED),0,0);
    
    return 0;
}