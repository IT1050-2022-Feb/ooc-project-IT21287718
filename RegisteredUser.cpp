//IT21286278-IT21287718-IT21287022
#include <cstring>

using namespace std;

RegisteredUser::RegisteredUser()
{
    strcpy(name,"");
    strcpy(nic,"");
    strcpy(address,"");
    strcpy(dob,"");
    strcpy(email,"");
    strcpy(contactNo,"");
}

RegisteredUser::RegisteredUser(const char cName[], const char cNIC[], const char cAddress[], const char cDOB[], const char cNo[], const char cEmail[])
{
    strcpy(name,cName);
    strcpy(nic,cNIC);
    strcpy(address,cAddress);
    strcpy(dob,cDOB);
    strcpy(email, cEmail);
    strcpy(contactNo,cNo);
}

 void RegisteredUser::logIn()
{
     
}

void RegisteredUser::logOut()
{
            
}

void RegisteredUser::checkDetails()
{
            
}
void RegisteredUser::displayDetails()
{
    cout<<"Name : "<<name<<endl;
    cout<<"NIC : "<<nic<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"DOB : "<<dob<<endl;
    cout<<"Email : "<<email<<endl;
    cout<<"Contact No : "<<contactNo<<endl; 
}

RegisteredUser::~RegisteredUser()
{
    cout<<"Destructor called"<<endl;
}
