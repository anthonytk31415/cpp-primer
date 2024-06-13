#include <iostream>

int main() 
{
    int sum = 0, val = 0;
    std::cout << "enter num of iterations: " << std::endl;
    std::cin >> val; 
    for (int i = 10; i > val; i--){
        sum -= i; 
    }
    std::cout << "the total sum is: " << sum << std::endl; 
    return 0; 
    
}