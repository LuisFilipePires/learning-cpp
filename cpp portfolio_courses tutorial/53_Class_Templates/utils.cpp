#include "lib.hpp"
/*function for Int type*/
void IntArray::fill (int value)
{
    for ( int i = 0; i < 10; i++)
        array[i] = value;
}

int& IntArray::at(int index)
{
    return array[index];
}


/*same function for String type*/
void StringArray::fill (std::string value)
{
    for (int i = 0; i < 10; i++)
        array[i] = value;
}

std::string& StringArray:: at(int index)
{
    return array[index];
}

