//IT21285806
#include<iostream>
#include<cstring>
#include"Payment.h"

using namespace std;

Payment::Payment()
{
  strcpy(paymentID,"");
  strcpy(paymentMethod,"");
  strcpy(paymentDate,"");
}

Payment::Payment(char ppaymentID[],char ppaymentMethod[],char ppaymentDate[])
{
  strcpy(paymentID,ppaymentID);
  strcpy(paymentMethod,ppaymentMethod);
  strcpy(paymentDate,ppaymentDate);
}

void Payment::setPaymentDetails()
{

}

void Payment::createPayment()
{

}

void Payment::confirmPayment()
{

}

void Payment::displayConfirmation()
{

}

void Payment::displayPaymentDetails()
{
    cout<<"__Payement Details___"<<endl;
    cout<<"Payment ID : "<<paymentID<<endl;
    cout<<"Payment Mathod : "<<paymentMethod<<endl;
    cout<<"Payment Date : "<<paymentDate<<endl;
    cout<<"**"<<endl<<endl;
}

Payment::~Payment()
{
  for(int i=0; i<SIZE1; i++)
    {
      delete reg_cus[i];
    }

  for(int j=0; j<SIZE2; j++)
    {
      delete lowner[j];
    }
}