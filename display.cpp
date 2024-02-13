#include <iostream>
#include "display.h"
#include "fstr.h"

void Display::set_buff(fstr& t_insert, unsigned char t_line = 0) {
    //m_buff.at(t_line) = m_buff.at(t_line) + t_insert;
}

void Display::set_print_buff(fstr t_insert, unsigned char t_x = 0, unsigned char t_y = 0) {
    
}

void Display::print() {
    for (auto i : m_buff) {
        std::cout << i.get_f() << std::endl;
    }
}

void Display::update_buffer() {
    m_buff.resize(m_size_y);
    for (auto& i : m_buff) { i.get_base().resize(m_size_x); }
    return;
}