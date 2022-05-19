//IT21286278
#pragma once
#include "RegisteredUser.h"
#include "Reservation.h"
#include "Document.h"
#include "Land.h"

#define SIZE1 2

class Manager : public RegisteredUser
{
    private :
        char managerID[10];
        Manager *manager1[SIZE1];

    public : 
        Manager();
        Manager(const char cName[], const char cNIC[], const char cAddress[], const char cDOB[], const char cNo[], const char cEmail[], const char MID[]);
        void checkDocuments(Document *document1);
        void checkReservationRequest(Manager *manager1, Manager *manager2);
        void checkLandAvailability(Land *land1);
        void checkInquiries();
        void displayDetails();
        ~Manager();
};
