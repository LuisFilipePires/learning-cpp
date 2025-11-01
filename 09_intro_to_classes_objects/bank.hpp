

#ifndef BANK_HPP
# define BANK_HPP

# include <iostream>
# include <string>

class BankAccount
{
	public:
	std::string	_name;
	int			_balance;
	public:
	void withdraw (int amount);
	
	
};


std::ostream& operator<<(std::ostream& os, const BankAccount& f);




#endif
