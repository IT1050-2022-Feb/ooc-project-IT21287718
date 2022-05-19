//IT21287718
#include<iostream>
#include "Land.h"
#include"Payment.h"
#include"RegisteredCustomer"
#include "LandOwner.h"
using namespace std;

class Report{
  private:
    char reportID[10];
    char reportDate[10];
    char reportType[20];
  public:
    Report();
    Report(char rID[], char rDate[], char rType[]);
    void soldLandList(Land *L);
    void paymentDetailsList(Payment *P);
    void registeredCustomerDetails(RegisteredCustomer *R);
    void landownerDetails(LandOwner *L);
    void displayDetails();
    ~Report();
};