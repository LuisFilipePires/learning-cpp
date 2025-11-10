#include <iostream>
#include <vector>

int main()
{
    std::cout << "Number of elements: ";
    int total = 0;

    std::cin >> total;

    std::vector<int> data(total);

    for (int i = 0; i < total; i++)
    {
        std::cout << "Element: " << i << ": ";
        std::cin >> data[i];
    }

    for (auto elem : data)
        std::cout << elem << " ";
    std::cout << std::endl;


    std::vector<int> data1;
    int i = 0;
    int value = 0;

    std::cout << "Enter -1 to close input" << std::endl;
    
    while(true)
    {  
        std::cout << "Element " << i << ": ";
        std::cin >> value;
        if (value == -1) break;
        data1.push_back(value);
        i++;
    }

    std::cout << "Entered elements: " << std::endl;
    for (auto elem : data1)
        std::cout << elem << " ";
    std::cout << std::endl;


    return (0);
}

/*
output:
c3r4s2% ./a.out
Number of elements: 12
Element: 0: 55
Element: 1: 33
Element: 2: 02
Element: 3: 85
Element: 4: 9965
Element: 5: 3215
Element: 6: 5454
Element: 7: 8
Element: 8: 4
Element: 9: 65
Element: 10: 514
Element: 11: 2
55 33 2 85 9965 3215 5454 8 4 65 514 2 
Enter -1 to close input
Element 0: 111
Element 1: 20
Element 2: 52
Element 3: 55
Element 4: 55
Element 5: 6
Element 6: 7
Element 7: 485
Element 8: 69
Element 9: 45
Element 10: 78
Element 11: 2157
Element 12: 693
Element 13: 452
Element 14: 114
Element 15: 01
Element 16: 0102
Element 17: 4052
Element 18: 7580798
Element 19: 025402
Element 20: -1
Entered elements: 
111 20 52 55 55 6 7 485 69 45 78 2157 693 452 114 1 102 4052 7580798 25402 
c3r4s2% 

*/