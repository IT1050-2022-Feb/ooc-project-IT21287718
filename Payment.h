//IT21285806
#pragma once
#include"RegisteredCustomer.h"
#include "Landowner.h"
#define SIZE1 2
#define SIZE2 2

class Payment
{
    private :
        char paymentID[10];
        char paymentMethod[20];
        char paymentDate[20];

     RegisteredCustomer reg_cus[SIZE1];
     Landownerlowner[SIZE2];

    public:
    Payment();
    Payment(char ppaymentID[],char ppaymentMethod[],char ppaymentDate[]);
    void setPaymentDetails();
    void createPayment();
    void confirmPayment();
    void displayConfirmation();
    void displayPaymentDetails();
    ~Payment();
};