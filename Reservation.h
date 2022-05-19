//IT21286032
#pragma once
#include "Manager.h"
#include "RegisteredCustomer.h"
#define SIZE1 5
#define SIZE2 5

class Reservation{
  private:
    char reservationID[10];

    Manager *man[SIZE1];
    RegisteredCustomer *regcus[SIZE2];


  public:
    Reservation();
    Reservation(const char preservationID[]);
    void addReservation();
    void displayConfirmation();
    void UpdateStatus();
    void displayReservationDetails();
    ~Reservation();

};