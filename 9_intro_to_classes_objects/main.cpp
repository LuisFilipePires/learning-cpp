
#include "bank.hpp"

int main()
{
	BankAccount	account1;
	BankAccount		account2;
	
	account1._name = "Nunes";
	account1._balance = 500;
	
	std::cout << account1 << std::endl;

	
	account2._name = "Fill";
	account2._balance = 5000;
	
	std::cout << account2;
	account2.withdraw(4500);
	//std::cout << account2 << std::endl;

	account2.withdraw(4500);
	//calling operator << at withdraw function
	//std::cout << account2 << std::endl;


	
	return(0);
}
