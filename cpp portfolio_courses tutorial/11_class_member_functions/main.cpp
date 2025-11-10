
#include <iostream>
#include <string>

class Rectangle
{
	private:
		double _length;
		double _width;
		double _area();
	public:
		void setDimensions(double l, double w);
		double perimeter();
		void print_area();
	
};

//width is 5 by defaulf if value not set
void Rectangle::setDimensions(double l, double w = 5)
{
	_length = l;
	_width = w;
}

double Rectangle::perimeter()
{
	return (2 * (_length + _width));
}

double Rectangle::_area()
{
	return (_length * _width);
}

void Rectangle::print_area()
{
	std::cout << "area: " << _area() << std::endl;
}

int main()
{
	Rectangle rectangle1;
	rectangle1.setDimensions(10,20);
	std::cout << "perimeter: " << rectangle1.perimeter() << std::endl;
	rectangle1.print_area();
	
	Rectangle rectangle2;
	rectangle2.setDimensions(10);
	std::cout << "rectangle 2 perimeter: " << rectangle2.perimeter() << std::endl;
	rectangle2.print_area();

	return(0);
}

/*
 * perimeter: 60
area: 200
rectangle 2 perimeter: 30
area: 50
*/
