#ifndef LIB_HPP
# define LIB_HPP

# include <string>
# include <iostream>


class IntArray
{
    public:
    int array[10];

    void fill (int value);
    int& at(int index);

};



/*if its an array of strings the code will be duplicated
unnecessarely*/

class StringArray
{
    public:
    std::string array[10];

    void fill (std::string value);
    std::string& at(int index);

};



// Templates are resolved at compile time,
// not determined at run time.
// You can't use a runtime variable as the array length — it causes an error.

template<typename T, int length>
class Array
{
public:
    T array[length];

    void fill(T value)
    {
        for (int i = 0; i < length; i++)
            array[i] = value;
    }

    T& at(int index)
    {
        return array[index];
    }
};




#endif