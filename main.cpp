#include "ZBlock.h"

int main(int argc, char** argv)
{
    TZBlock str;
    std::cout << "Please, input string for preprocessing: ";
    std::cin >> str;
    str.ZFunction();
    std::cout << str;
    return 0;
}
