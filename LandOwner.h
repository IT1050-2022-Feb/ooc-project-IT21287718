//IT21287022
#pragma once
#include "RegisteredUser.h"
#include "Payment.h"
#include "Land.h"
#define SIZE1 2
#define SIZE2 2
class Landowner : public RegisteredUser
{ 
  private:
    char landOwnerID[10];

    Land* land[SIZE1];
    Payment* pay[SIZE2];


  public:
    Landowner();
    Landowner(const char cName[], const char cNIC[],const char cAddress[],const char cDOB[],const char cNo[],const char cEmail[],const char loID[] );
    void setOwnerDetails(const char loID[] ,const char cName[], const char cNIC[],const char cAddress[],const char cDOB[],const char cNo[],const char cEmail[],Land* land1 , Land* land2,Payment* pay1,Payment* pay2);
    void submitDocument();
    void makePayment();
    void leaveFeedback();
    void displayDetails();
    ~Landowner();

};