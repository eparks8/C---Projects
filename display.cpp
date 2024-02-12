#include "display.h"
#include "fstr.h"

void Display::set_buff(fstr t_insert, int t_x = 0, int t_y = 0) {
    
}

void Display::set_print_buff(fstr t_insert, int t_x = 0, int t_y = 0) {
    
}

void Display::print() {
    for (auto i : m_print_buff) {
        printf("%s",i.getf());
    }
}
