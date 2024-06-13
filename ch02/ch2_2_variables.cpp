#include <iostream>
#include <any> 


int main() 
{
    // // ways to define a variable: 
    // int x = 0;  
    // int y = { 0 }; 
    // int z{0};
    // int w(0);
    // std::cout << "x: " << x << " y: " << y << " z: " << z << " w: " << w << std::endl; 
    
    // // extern int i;   // declares but does not define i 
    // int j;          // declares and defines j
    
    // int ival = 1024; 
    // int &refVal = ival; // refVal reference to ival
    // // int &refVal1 = 10; // produces an error
    
    // int ival1 = 10;
    // int *p = &ival1; // p holds the address of ival. We use &ival via the & operator to get the address.
    // // get the p object using * dereference operator
    // std::cout << "p's value: " << *p << std::endl; 

    int i = 42;         // 
    int &r = i;         // reference to i
    int *p;             // declare p pointer
    p = &i;             // bind p to address of i using & operator 
    *p = i;             // dereference p* to the objecet and bind to i
    int &r2 = *p;       // reference r2 to the object that *p dereferences to
    int *z = nullptr;   // uses the null pointer
    std::cout << "r: " << r  << " r2: " <<  r2 << std::endl;


    typedef double wages; 
    wages wage = 2.00; 
    std::cout << wage << std::endl;   

    return 0;
}


