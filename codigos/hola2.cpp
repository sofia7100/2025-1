#include <iostream>
#include <string>

int main(void)
{
    std::string name;
    std::cout << "hello, whats your name?\n";
    //std::cin >>name; //lee hasta el primer espacio
    std::getline(std::cin, name);
    std::cout <<"hello, " + name + "\n" ;
    return 0;
    }
    