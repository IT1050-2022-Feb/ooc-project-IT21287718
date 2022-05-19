//IT21287718
#include "Report.h"
#include "Land.h"
#include "Payment.h"
#include "RegisteredCustomer.h"
#include "Landowner.h"
#include <iostream>
#include <cstring>
using namespace std;

Report::Report(){
  strcpy(reportID, "");
  strcpy(reportDate, "");
  strcpy(reportType, ""); 
}
Report::Report(char rID[], char rDate[], char rType[])
{
  strcpy(reportID, rID);
  strcpy(reportDate, rDate);
  strcpy(reportType, rType); 
}
void Report::soldLandList(Land *L)
{
  
}
void Report::paymentDetailsList(Payment *P)
{
  
}
void Report::registeredCustomerDetails(RegisteredCustomer *R)
{
  
}
void Report::landownerDetails(LandOwner *L)
{
  
}
void Report::displayDetails()
{
  cout<<"Report ID : "<<reportID<<endl;
  cout<<"Report date : "<<reportDate<<endl;
  cout<<"Report type : "<<reportType<<endl;
}
Report::~Report()
{
  cout<<"Distructor runs for report"<<endl;
}