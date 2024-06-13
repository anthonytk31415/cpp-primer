#include <iostream>
#include <string>
using std::string;

int main () 
{
    string s1; 
    string s2 = s1;         // copy of s1
    string s3 = "hiya";     // string literal definition
    string s4(10, 'c');     // cccccccccc
    std::cout << s4 << std::endl; 
    return 0;
}