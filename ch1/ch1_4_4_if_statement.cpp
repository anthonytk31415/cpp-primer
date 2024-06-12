#include <iostream>

int main()
{
    int evens = 0, odds = 0; 
    for (int i = 0; i < 10; i ++){
        if (i % 2 == 0){
            evens += i;
        } else {
            odds += i; 
        }
    }
    std::cout << "odds are " << odds << " and evens are " << evens << std::endl;
    return 0; 
}