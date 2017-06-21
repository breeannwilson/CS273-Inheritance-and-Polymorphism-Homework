#ifndef CURATOR_H
#define CURATOR_H
#include "Bank.h"
#include "Savings_Acct.h"
#include "Checking_Acct.h"

class Curator {
public:
	static int id;

	static Account *factory(Customer *cust, std::string account_type) {
		if (account_type == "checking")
			return new Savings_Acct(cust, id);
		if (account_type == "savings")
			return new Checking_Acct(cust, id);
		else
			return NULL;
	}

};

#endif
