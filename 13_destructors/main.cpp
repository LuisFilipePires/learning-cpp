
#include <iostream>
#include <string>


class Number
{
	private:
		double _number;
		double *_number2;
		
	public:
	Number(double num);
		Number(double num, double num2);
		~Number();
			
};

Number::Number(double num)
{
	_number = num;
	
	std::cout << "constructor for number: " << _number << std::endl;
}

Number::Number(double num, double num2)
{
	_number = num;
	_number2 = (double*) malloc (sizeof(double));
	*_number2 = num2;
	
	std::cout << "constructor for number: " << _number << std::endl;
}

Number::~Number()
{
	std::cout << "Destructor called for number: " << _number << std::endl;
	free(_number2);
}



void test()
{
	Number six(6,1);
}

int main()
{
	Number seven(7,3);
	test();
	
	Number *five = new Number(5,6);
	delete(five);
	
	return(0);
}
