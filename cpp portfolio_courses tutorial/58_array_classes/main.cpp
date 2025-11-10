#include <iostream>
#include <string>
#include <array>

int main()
{
    int array1[5] = {1,2,3,4,5};
    array1[2] = 10;

    for (int i = 0; i < 5; i++)
        std::cout << "array1: " << array1[i] << std::endl;


    std::
    array<int, 5> array2 = {1,2,3,4,5};

    for (int i = 0; i < 5; i++)
        std::cout << "array2: " << array2[i] << std::endl;
    
    return 0;
}