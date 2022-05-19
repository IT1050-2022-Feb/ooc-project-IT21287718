//IT21285806
#include"Feedback.h"
#include<cstring>
#include<iostream>
using namespace std;

Feedback::Feedback()
{
  strcpy(feedbackID,"");
  strcpy(feedbackDescription,"");
  strcpy(feedbackDate,"");
}
Feedback::Feedback(char FID[],char FDescription[],char FDate[])
{
  strcpy(feedbackID,FID);
  strcpy(feedbackDescription,FDescription);
  strcpy(feedbackDate,FDate);
}
void Feedback::addFeedbackDetails()
{

}
void Feedback::displayFeedbackDetails()
{
  cout<<"__Feedback Details___"<<endl;
  cout<<"FeedBackID :"<<feedbackID<<endl;
  cout<<"FeedBackDescription :"<<feedbackDescription<<endl;
  cout<<"FeedBackDate :"<<feedbackDate<<endl;
  cout<<"**"<<endl<<endl;

}
Feedback::~Feedback()
{

}