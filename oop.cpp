
// Charles Truscott
// Byron Bay NSW 2481
// github.com/ctwtruscottwatters
#include "textprocessing.h"

int main()
{
    TextProcessing T_P{(char *)  "Mark Watters", (char *) "Dim Mak Taijuqan Wu Chi Wing Tsun" };

    T_P.c1 = (char *) "Charles Truscott Watters";
    T_P.c2 = (char *) "13/01/1993";
    std::cout << "String Length of Parameters: " << T_P.string_length_of_parameters << std::endl;
    std::cout << "\nEager to train half an hour of Taijiquan Fajing with you each 5 day week Dad";
    printf("\n");
    T_P.copy_of_string(T_P.c1, T_P.c2);
    // need to implement constructor, self-reference
    std::cout << * T_P.holding_copies << std::endl;
    ++T_P.holding_copies;
    std::cout << * T_P.holding_copies << std::endl;

}

