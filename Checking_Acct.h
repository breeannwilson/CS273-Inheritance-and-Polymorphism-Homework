#ifndef CHECKING_ACCT
#define CHECKING_ACCT
#include <string>

#include "Account.h"

class Checking_Acct : public Account {
private:
	std::string account_type = "Checking Account";
	Checking_Acct(Customer *cust, int id) : Account(cust, id) {}

	friend class Curator;

public:
	void add_interest() {
		balance = balance + balance * .02;
	}

	void deposit(double amt) {
		balance += balance + amt;
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
