#include "bank.hpp"


void BankAccount::withdraw (int amount)
{
	if (amount > this->_balance)
		std::cout << "operation denied, low sold" << std::endl;
	else
	{
		this->_balance = this->_balance - amount;
		std::cout << "operation accepted " << "withdraw "
				<< amount << std::endl;
	}
	//call operator <<
	std::cout << *this;
	
}

std::ostream& operator<<(std::ostream& os, const BankAccount& f)
{
	os << f._name << " has " << f._balance << std::endl;
	return (os);
}

/*
 * example:
std::ostream& operator<<(std::ostream& os, const AForm& f)
{
    os  << COL_YEL << f.getName()
        << " | signed: " << (f.getIsSigned() ? "yes" : "no")
        << " | grade to sign: " << f.getGradeToSign()
        << " | grade to execute: " << f.getGradeToExecute()
        << COL_DEF << std::endl;
    return os;
}
*/
