#ifndef STUDENT_CUST
#define STUDENT_CUST
#include "Customer.h"

class Student_Cust : public Customer {
private:
	const double checking_interest;
	const double savings_interest;
	const double check_charge;
	const double overdraft_penalty;
public:
	Student_Cust() {}

	Student_Cust() {
		checking_interest = .02;
		savings_interest = .03;
		check_charge = 10;
		overdraft_penalty = 20;
	}

	double get_checkcharge() {
		return check_charge;
	}

	double get_overdraftpenalty() {
		return overdraft_penalty;
	}
};


#endif //STUDENT_CUST
