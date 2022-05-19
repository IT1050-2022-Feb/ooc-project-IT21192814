#include<iostream>
#include "payment.h"

using namespace std;

int main() {
	payment::payment(int accNo,char paymentMethod,int userId) {
		Account_No = accNo;
		Payment_Method = paymentMethod;
		User_ID = userId;
	}

	void payment::checkPayment() {

	}

	void payment::updateDetails(int accNo,char paymentMethod, int userId) {

	}
	
	char payment::getDetails() {

	}
	
	void payment::displayDetails(){

	}
	
	payment::~payment(){

	}

}
