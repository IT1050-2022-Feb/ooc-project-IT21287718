//IT21286032
#include<iostream>
#include "Reservation.h"
#include<cstring>

#include<iostream>
#include "Reservation.h"
#include<cstring>

using namespace std;

Reservation::Reservation()
{
  strcpy(reservationID,"");
}

Reservation::Reservation(const char preservationID[])
{
  strcpy(reservationID, preservationID);
}

void Reservation::addReservation()
{

}

void Reservation::displayConfirmation()
{

}

void Reservation::UpdateStatus()
{

}

void Reservation::displayReservationDetails()
{
  cout<<"Reservation ID"<<reservationID<<endl;
  cout<<"**"<<endl<<endl;
}

Reservation::~Reservation()
{
  //destructor
  for(int i=0; i<SIZE1; i++)
    {
      delete man[i];
    }

  for(int j=0; j<SIZE2; j++)
   {
       delete regcus[j];
   }
}
