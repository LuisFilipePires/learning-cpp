
#include <iostream>

int main()
{
    /*type convertion =	conversion a value of an data type to another
            implicity = automatic
			explicity =	preced value with new data type
	*/

	double pi = 3.14;
	int x = static_cast<int>(pi);
	int y = (int)pi;
	std::cout << x << std::endl;   //'3'
	std::cout << y << std::endl;   // '3'


	double val = (int)5.267;
	std::cout << val << std::endl;   // '5'


	char c = 100;
	std::cout << c << std::endl;  // 'd'

	int c1 = 100;
	std::cout << (char)c1 << std::endl;    // 'd'
	char c2;
	c2 = (char)c1;
	std::cout << c2 << std::endl;  // 'd'


	int correct = 8;
	int questions = 10;

	double score = (correct/(double)questions) * 100;
	std::cout << "score : " << score << "%" << std::endl;


    return (0);
}
