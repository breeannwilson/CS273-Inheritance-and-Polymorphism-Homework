#ifndef SAVINGS_ACCT
#define SAVINGS_ACCT
#include "Account.h"
#include "Customer.h"

class Savings_Acct : public Account {
private:
	std::string account_type = "Savings Account";
	Savings_Acct(Customer *cust, int id) : Account(cust, id) {}

	friend class Curator;

public:

	void add_interest() {
		balance = balance + balance * .09;
	}

	void deposit(double amt) {
		balance += amt + balance;
	}

	void withdraw(double amt) {
		if (amt <= balance)
			balance -= balance - amt;
	}

	std::string get_accounttype() {
		return account_type;
	}

	std::string to_string() {
		account_type = get_accounttype();
	}

};


#endif
