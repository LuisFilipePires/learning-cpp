
#include "lib.hpp"

int main()
{

    Array<int, 5> intArr;
    intArr.fill(2);
    std::cout << "int arr [4]: " <<  intArr.at (4) << std::endl;

    Array<std::string, 7> strArr;
    strArr.fill("hi");
    std::cout << "str arr [6]: " << strArr.at (6) << std::endl;
    strArr.at(5) = "123";
    for(int i = 0; i < 7; i++)
    {
        std::cout << " str arr at [" << i << "]: " << strArr.at(i) << std::endl; 
    }

    return (0);
}