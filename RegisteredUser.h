//IT21286278-IT21287718-IT21287022
#pragma once
class RegisteredUser
{
    protected :
        char name[50];
        char nic[20];
        char address[70];
        char dob[12];
        char contactNo[20];
        char email[50];

    public :
        RegisteredUser();
        RegisteredUser(const char cName[], const char cNIC[], const char cAddress[], const char cDOB[], const char cNo[], const char cEmail[]); 
        void logIn();
        void logOut();
        void checkDetails();
        virtual void displayDetails();
        ~RegisteredUser();
};