#ifndef FSTR_H
#define FSTR_H

#include <string>
#include <vector>

class fstr {
    public:
    //Default [de/con]structor
    fstr(const char* b, unsigned char clr) {m_base = b; m_color = clr;}
    fstr() = default;
    ~fstr() = default;

    //Basic parameter functions
    void set_base(std::string b) { m_base = b; setf(); return; }
    void set_color(unsigned char clr) { m_color = clr; setf(); return;}
    std::string& get_base() { return m_base; }
    int get_color() { return (int)m_color; }
    std::string& get_f() { return m_formatted; }
    size_t length() { return m_formatted.length(); }

    private:
    std::string m_base{""};
    std::string m_formatted{""};
    unsigned char m_color{0};

    inline void setf() { m_formatted = "\x1B[" + std::to_string(m_color) + "m" + m_base + "\033[0m"; return; }
};

#endif