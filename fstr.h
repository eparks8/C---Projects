#ifndef FSTR_H
#define FSTR_H

#include <string>
#include <vector>

class fstr {
    public:
    //Default [de/con]structor
    fstr() = default;
    fstr(std::string b, int clr) : base(b), color(clr) {};
    ~fstr() = default;

    //Basic parameter functions
    void setbase(std::string b) { base = b; setf(); return; }
    std::string& getbase() { return base; }
    std::string getf() { return formatted; }
    size_t length() { return formatted.length(); }
    
    
    private:
    std::string base{""};
    std::string formatted{""};
    int color{0};

    void setf() { formatted = "\x1B[" + color + 'm' + base + "\033[0m"; }
};

#endif