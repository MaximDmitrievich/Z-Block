#ifndef _ZBLOCK_H_
#define _ZBLOCK_H_

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

class TZBlock {
private:
    std::string s;
    std::vector<int> z;
    std::vector<int> l;
    std::vector<int> r;
public:
    TZBlock();
    virtual ~TZBlock();

    void ZFunction();

    friend std::istream &operator >>(std::istream &is, TZBlock &str);
    friend std::ostream &operator <<(std::ostream &os, TZBlock &str);
    
};

#endif
