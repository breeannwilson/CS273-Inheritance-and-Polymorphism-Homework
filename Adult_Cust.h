#ifndef ADULT_CUST
#define ADULT_CUST
#include "Customer.h"

class Adult_Cust : public Customer {
private: 
	const double checking_interest;
	const double savings_interest;
	const double check_charge;
	const double overdraft_penalty;
public:
	Adult_Cust() {}
	Adult_Cust() {
		checking_interest = .01;
		savings_interest = .02;
		check_charge = 20;
		overdraft_penalty = 30;
	}

	double get_checkcharge() {
		return check_charge;
	}

	double get_overdraftpenalty() {
		return overdraft_penalty;
	}
};


#endif //ADULT_CUST
