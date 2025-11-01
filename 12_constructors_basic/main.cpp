
#include <iostream>
#include <string>

class Cat
{
	private:
		std::string _name;
		std::string _color;
		std::string _fav_toy;
	public:
		Cat();
		Cat(std::string n);
		Cat(std::string n, std::string c, std::string f);
		void print_cat();
};

Cat::Cat()
{
	_name = "unknown";
	_color = "unknown";
	_fav_toy = "unknown"; 
}

void Cat::print_cat()
{
	std::cout << "Name: " << _name << std::endl;
	std::cout << "color: " << _color << std::endl;
	std::cout << "Favourite toy: " << _fav_toy << std::endl;
}

Cat::Cat(std::string n)
{
	_name = n;
}

Cat::Cat(std::string n, std::string c, std::string f = "laser pointer")
{
	_name = n;
	_color = c;
	_fav_toy = f;
}



int main()
{
	Cat cat1;
	std::cout << "cat1..." << std::endl;
	cat1.print_cat();
	
	Cat cat2("Spike");
	std::cout << "cat2..." << std::endl;
	cat2.print_cat();
	
	Cat cat3("Garfield", "Orange", "ball of yarn");
	std::cout << "cat3..." << std::endl;
	cat3.print_cat();
	
	
	return (0);
}
