class feedback
{
private:
	int feedbackID;
	string email;
	string feedbackMessage;
	
public:
	void setfeedback(int feedbackID, string email, string feedbackMessage);
	void displayFeedback();
	
	~feedback();
};
