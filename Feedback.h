//IT21285806
#pragma once
class Feedback
{
  private:
    char feedbackID[10];
    char feedbackDescription[255];
    char feedbackDate[10];
  public:
   Feedback();
   Feedback(char feedbackID[],char feedbackDescription[],char feedbackDate[]);
   void addFeedbackDetails();
   void displayFeedbackDetails();
   ~Feedback();

};