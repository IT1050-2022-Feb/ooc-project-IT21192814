class payment
{
private:
	int accNo;
	char paymentMethod;
	int userId;
	
public:
	void setpayment(int accNo,char paymentMethod,int userId);
	void checkPayment();
	void updateDetails(int accNo,char paymentMethod, int userId);
	char getDetails();
	void displayDetails();
	
	~payment();
};
