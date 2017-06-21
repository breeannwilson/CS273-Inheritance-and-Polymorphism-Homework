#ifndef SENIOR_CUST
#define SENIOR_CUST
#include "Customer.h"

class Senior_Cust : public Customer{
private:
	const double checking_interest;
	const double savings_interest;
	const double check_charge;
	const double overdraft_penalty;
public:
	Senior_Cust() {}
	Senior_Cust() { 
		checking_interest = .02;
		savings_interest = .05;
		check_charge = 5;
		overdraft_penalty = 15;
	}

	double get_checkcharge() {
		return check_charge;
	}

	double get_overdraftpenalty() {
		return overdraft_penalty;
	}
	

};


#endif