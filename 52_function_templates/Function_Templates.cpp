/*Learn to write generic C++ functions using templates. 
This tutorial demonstrates how to reduce code duplication 
by creating a single function that works with various data types.
The compiler generates type-specific versions, 
improving code maintainability.*/

#include <iostream>

/*
double find_max(double a, double b)
{
    if (a > b)
        return(a);
    else
        return (b);
}

int find_max(int a, int b)
{
    if (a > b)
        return (a);
    else
        return(b);
}
*/

/*b'cause a duplicated code, use template*/


//template <class T>  worsks
template <typename T>
T find_max( T a, T b)
{
    if (a > b)
        return (a);

    return(b);
}

template <typename T1, typename T2>
int find_max_size(T1 a, T2 b)
{
    if (sizeof(a) > sizeof(b))
        return (sizeof(a));
    return (sizeof(b));
}



int main()
{
    double d_x = 10.36;
    double d_y = 5.28;

    double f_d_max = find_max<double>(d_x, d_y);
    std::cout << "double max: " << f_d_max << std::endl;

    int it_a = 55;
    int it_b = 56;

    int f_i_max = find_max<int> (it_a, it_b);
    //    int f_i_max = find_max(int_a, int_b);     // not needed <int> the type
    //the compiler identify it
    std::cout << "int max: " << f_i_max << std::endl;


    int max_size = find_max_size (it_a, d_x);
    std::cout << "max size: " << max_size << " bytes" << std::endl;
    // int 4 bytes, double 8 bytes;

    std::string st = "ola meu tudo bem";
    max_size = find_max_size (st, d_x);
    std::cout << "max size: string or double " << max_size << " bytes" << std::endl;

    char c  = 78;
    max_size = find_max_size (c, "abc");
    std::cout << "max size: " << max_size << " bytes" << std::endl;


    return (0);
}