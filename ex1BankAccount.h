
// 5-This example use char arrays to hold the character data, but you could use string
#include "stdafx.h"
#include <cstring>
// class definition
class BankAccount
{
private:
	char name[40]; // or std::string name;
	char acctnum[25]; // or std::string acctnum;
	double balance;
public:
	BankAccount(const char * client, const char * num, double bal = 0.0);
	//or BankAccount(const std::string & client,
	// const std::string & num, double bal = 0.0);
	void show(void) const;
	void deposit(double cash);
	void withdraw(double cash);
	/*Question 7. BankAccount constructor*/
	BankAccount::BankAccount(const char * client, const char * num, double bal)
	{
		strncpy(name, client, 39);
		name[39] = '\0';
		strncpy(acctnum, num, 24);
		acctnum[24] = '\0';
		balance = bal;
	}
};