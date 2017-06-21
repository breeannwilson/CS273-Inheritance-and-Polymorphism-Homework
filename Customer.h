#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
protected:
	std::string name;				//name of customer
	std::string address;			//address for customer
	int age;						//age of customer
	std::string telephone_number;
	int customer_number;			//the unique customer number

public:
	
	void set_name(std::string name) {
		this->name = name;
	}
	std::string get_name() {
		return name;
	}

	void set_address(std::string address) {
		this->address = address;
	}
	std::string get_address() {
		return address;
	}

	void set_age(int age) {
		this->age = age;
	}
	int get_age() {
		return age;
	}

	void set_telephonenumber(std::string telephone_number) {
		this->telephone_number = telephone_number;
	}
	std::string get_telephonenumber() {
		return telephone_number;
	}

	void set_customernumber(int customer_number) {
		this->customer_number = customer_number;
	}
	int get_customernumber() {
		return customer_number;
	}

	virtual double get_checkcharge() = 0;
	
	virtual double get_overdraftpenalty() = 0;

};


#endif