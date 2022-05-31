#include <iostream>
 
// macro with parameter
//It will search Area keyword in entire code and will cumtily it's two parameters.
#define AREA(l, b) (l * b);
int main()
{
    int l1 = 10, l2 = 5, area;
 
    area = AREA(l1, l2);
 
    std::cout << "Area of rectangle is: " << area;
 
    return 0;
}


/*
//One another preprocessor is ifdef & endif.
//Conditional Compilation: 
    Conditional Compilation directives are type of directives which helps to compile a specific portion of the program or to skip compilation of some specific part of the program based on some conditions.
    This can be done with the help of two preprocessing commands ‘ifdef‘ and ‘endif‘. 
#ifdef macro_name
    statement1;
    statement2;
    statement3;
    .
    .
    .
    statementN;
#endif
*/