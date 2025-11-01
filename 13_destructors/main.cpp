
#include <iostream>
#include <string>


class Number
{
	private:
		double _number;
		
	public:
		Number(double num);
		~Number();
			
};

Number::Number(double num)
{
	_number = num;
	std::cout << "constructor for number: " << _number << std::endl;
}

Number::~Number()
{
	std::cout << "Destructor called" << std::endl;
	std::cout << "Number: " << _number << std::endl;
}


int main()
{
	Number seven(7);
	
	return(0);
}
