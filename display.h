#ifndef DISPLAY_H
#define DISPLAY_H

#include <vector>
#include <string>
#include "fstr.h"

class Display {
    public:
    //Default [de/con]structor
    Display() {};
    ~Display() {};
    
    //Basic parameter functions
    void set_x(int t_n) { m_size_x = t_n; return; }
    void set_y(int t_n) { m_size_y = t_n; return; }
    void set_p(int t_n) { m_priority = t_n; return; }
    int get_x() { return m_size_x; }
    int get_y() { return m_size_y; }
    int get_p() { return m_priority; }
    
    //Storage functions
    void set_buff(fstr t_insert, int t_x, int t_y);
    void set_print_buff(fstr t_insert, int t_x, int t_y);
    std::vector<fstr>& get_buff() { return m_buff; }
    std::vector<fstr>& get_print_buff() { return m_print_buff; }
    
    //UI Functions
    void print();
    
    private:
    
    int m_size_x{0}, m_size_y{0}, m_priority{0};
    std::string m_boundary[2] = {" | ","---"};
    std::vector<fstr> m_buff{}, m_print_buff{};
    
    
};

#endif