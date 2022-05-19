//IT21286278
#pragma once
#include "RegisteredUser.h"
#include "Advertisement.h"
#include "Reservation.h"
#include "Feedback.h"
#include "Payment.h"
#include "Document.h"

//Code generate a error due to the  circular including. 
//Once comment the objects and header files code display the 
//output for displayDetails() method
#define SIZE1 2
#define SIZE2 2
#define SIZE3 2
#define SIZE4 2

class RegisteredCustomer : public RegisteredUser
{
    private :
        char customerID[10];
        Reservation *reserve[SIZE1];
        Feedback *fBack[SIZE2];
        Payment *payment[SIZE3];
        Document *doc[SIZE4];

    public :
        RegisteredCustomer();
        RegisteredCustomer(const char cName[], const char cNIC[], const char cAddress[], const char cDOB[], const char cNo[], const char cEmail[], const char CID[]);
        void setCustomerDetails();
        void searchLands(Advertisement* Ad);
        void requestReservation(Reservation *reserve1, Reservation *reserve2);
        void submitDocuments(Document *doc1, Document *doc2);
        void makePayment(Payment *payment1, Payment *payment2);
        void leaveFeedback(Feedback *fBack1,Feedback *fBack2);
        void displayDetails();
        ~RegisteredCustomer();
};
