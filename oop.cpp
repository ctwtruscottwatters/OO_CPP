
// Charles Truscott
// Byron Bay NSW 2481
// github.com/ctwtruscottwatters
#include "textprocessing.h"

int main()
{
    TextProcessing T_P;
    T_P.c1 = (char *) "Charles Truscott Watters";
    T_P.c2 = (char *) "13/01/1993";
    T_P.copy_of_string(T_P.c1, T_P.c2);
    // need to implement constructor, self-reference
    std::cout << * T_P.holding_copies << std::endl;
    ++T_P.holding_copies;
    std::cout << * T_P.holding_copies << std::endl;

}

