//IT21286278
#include <iostream>
#include <cstring>
#include "Manager.h"
#include "Reservation.h"
#include "Document.h"
#include "Land.h"

using namespace std;

Manager::Manager()
{
  strcpy(name, "");
}

Manager::Manager(const char cName[], const char cNIC[], const char cAddress[], const char cDOB[], const char cNo[], const char cEmail[], const char MID[]) : RegisteredUser (cName, cNIC, cAddress, cDOB, cNo, cEmail)
{  
  strcpy(managerID, MID);
}
void Manager::checkDocuments(Document *document1)
{
    
}
void Manager::checkReservationRequest(Manager *manager1, Manager *manager2)
{
  
}
void Manager::checkLandAvailability(Land *land1)
{
    
}
void Manager::checkInquiries()
{
  
}
void Manager::displayDetails()
{
    cout<<"Manager ID : "<<managerID<<endl;
    cout<<"Manager Name : "<<name<<endl;
    cout<<"Manager NIC : "<<nic<<endl;
    cout<<"Manager Address : "<<address<<endl;
    cout<<"DOB : "<<dob<<endl;
    cout<<"Email : "<<email<<endl;
    cout<<"Contact No : "<<contactNo<<endl;
    cout<<endl;
    cout<<"******************************"<<endl<<endl;
}
Manager::~Manager()
{
  cout<<"Destructor called"<<endl;
}