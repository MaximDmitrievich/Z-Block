#include "ZBlock.h"

TZBlock::TZBlock()
{
    this->s.clear();
    this->z.clear();
    this->l.clear();
    this->r.clear();
}

TZBlock::~TZBlock()
{
    this->s.clear();
    this->z.clear();
    this->l.clear();
    this->r.clear();
}

void TZBlock::ZFunction()
{
    for (int k = 0; k < this->s.length(); k++) {
        if (k <= this->r[k - 1]) {
            this->z[k] = std::min(this->r[k - 1] - k + 1, this->z[k - this->l[k - 1]]);
        }
        while (k + this->z[k] < this->s.length() && this->s[this->z[k]] == this->s[this->z[k] + k]) {
            this->z[k]++;
        }
        if (k + this->z[k] - 1 > this->r[k - 1]) {
            this->l[k] = k;
            this->r[k] = k + z[k] - 1;

        }
    }
}

std::istream &operator >>(std::istream &is, TZBlock &str)
{
    is >> str.s;
    str.z.resize(str.s.length());
    str.l.resize(str.s.length());
    str.r.resize(str.s.length());
    return is;
}

std::ostream &operator <<(std::ostream &os, TZBlock &str)
{
    os << "Length of string is " << str.s.length() << std::endl << "String\tZ-Block\tLeft\tRight" << std::endl;
    for (int i = 0; i < str.s.length(); i++) {
        std::cout << str.s[i] << '\t' << str.z[i] << '\t' << str.l[i] << '\t' << str.r[i] << std::endl;
    }
    os << std::endl;
    return os;
}
