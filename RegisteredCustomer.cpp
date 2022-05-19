//IT21286278
#include <iostream>
#include <cstring>
#include "RegisteredCustomer.h"
#include "Advertisement.h"

using namespace std;

RegisteredCustomer::RegisteredCustomer()
{
    strcpy(customerID,"");
}

RegisteredCustomer::RegisteredCustomer(const char cName[], const char cNIC[], const char cAddress[], const char cDOB[], const char cNo[], const char cEmail[], const char CID[]) : RegisteredUser (cName, cNIC, cAddress, cDOB, cNo, cEmail)
{
    strcpy(customerID, CID);
}

void RegisteredCustomer::setCustomerDetails()
{
    
}
void RegisteredCustomer::searchLands(Advertisement* Ad)
{
    
}
void RegisteredCustomer::requestReservation(Reservation *reserve1, Reservation *reserve2)
{
    
}
void RegisteredCustomer::submitDocuments(Document *doc1, Document *doc2)
{
    
}
void RegisteredCustomer::makePayment(Payment *payment1, Payment *payment2)
{
    
}
void RegisteredCustomer::leaveFeedback(Feedback *fBack1,Feedback *fBack2)
{
    
}
void RegisteredCustomer::displayDetails()
{
    cout<<"Customer ID : "<<customerID<<endl;
    cout<<"Customer Name : "<<name<<endl;
    cout<<"Customer NIC : "<<nic<<endl;
    cout<<"Customer Address : "<<address<<endl;
    cout<<"DOB : "<<dob<<endl;
    cout<<"Email : "<<email<<endl;
    cout<<"Contact No : "<<contactNo<<endl;
    cout<<endl;
    cout<<"******************************"<<endl<<endl;
}
RegisteredCustomer::~RegisteredCustomer()
{
    cout<<"Destructor Called"<<endl;
}