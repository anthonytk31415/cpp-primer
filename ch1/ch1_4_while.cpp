#include <iostream>

int main() 
{
    int sum = 0, val = 1; 
    while (val <= 10){
        sum += val; 
        ++ val;
        std::cout << "current sum: " << sum << std::endl;
    } 
    std::cout << "the total sum is: " << sum << std::endl; 
    return 0; 
    
}