//IT21287022
#include "Landowner.h"
#include "RegisteredUser.h"
#include <cstring>
#include <iostream>
using namespace std;

Landowner::Landowner()
{
  strcpy(landOwnerID,"");
}

Landowner::Landowner(const char cName[], const char cNIC[],const char cAddress[],const char cDOB[],const char cNo[],const char cEmail[],const char loID[] ) : RegisteredUser ( cName,  cNIC,  cAddress, cDOB,  cNo, cEmail)
{
  strcpy(landOwnerID,loID);
}

void Landowner::setOwnerDetails(const char loID[] ,const char cName[], const char cNIC[],const char cAddress[],const char cDOB[],const char cNo[],const char cEmail[],Land* land1 , Land* land2,Payment* pay1,Payment* pay2)
{
  strcpy(landOwnerID,loID);
}

void Landowner::submitDocument()
{

}
void Landowner:: makePayment()
{

}

void Landowner::leaveFeedback()
{

}
void Landowner::displayDetails()
{
    cout<<"Land Owner ID: "<<landOwnerID<<endl<<"LandOwner Name: "<<name<<endl<< "LandOwner NIC :"<<nic<<endl<<"LandOwner Address: "<<address<<endl<<"LandOwner DOB: "<<dob<<endl<<"Contact No: "<<contactNo<<endl<<"Land Owner Email: "<<email<<endl;
cout<<"******************************"<<endl<<endl;
}
Landowner::~Landowner()
{
  //desctuctor
}
