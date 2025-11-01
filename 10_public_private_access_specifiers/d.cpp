
#include "string"
#include "iostream"

//using namespace std


class Employee
{
	private:
		double	_salary;
		double calculate_bonus(void);
	public:
		std::string	name;
		void set_salary(double ptn_salary);
		double get_salary(void);
		void print_bonus(void);
};

void Employee::set_salary(double ptn_salary)
{
	this->_salary = ptn_salary;
}

double Employee::get_salary(void)
{
	return (_salary);
}

double Employee::calculate_bonus(void)
{
	return ( _salary *0.10);
}

void Employee::print_bonus()
{
	std::cout << "Bonus: " << calculate_bonus() << std::endl;
}

int main()
{ 
	Employee employee1;
	
	employee1.name = "Kevin";
	std::cout << employee1.name << std::endl;
	
	employee1.set_salary(5400.500);
	std::cout << "salary: " << employee1.get_salary() << std::endl;
	employee1.print_bonus();
	
	return (0);
}

/*
output:
	Kevin
	salary: 5400.5
	Bonus: 540.05
*/
