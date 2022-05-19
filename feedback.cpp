#include<iostream>
#include "feedback.h"

using namespace std;

int main() {
	feedback::feedback(int feedbackID, string email, string feedbackMessage) {
		Feedback_ID = feedbackID;
		Email = email;
		Feedback_Message = feedbackMessage;
	}

	void Feedback::displayFeedback() {

	}

	feedback::~feedback() {

	}

}
