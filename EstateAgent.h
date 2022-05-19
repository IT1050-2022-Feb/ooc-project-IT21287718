//IT21287718
#include "RegisteredUser.h"
#include<iostream>
using namespace std;

class EstateAgent : public RegisteredUser{
  private:
    char estateaAgentID[20];
  public:
    EstateAgent();
    EstateAgent(char ename[], char enic[], char eaddress[], char edob[], char econtactNo[], char eEmail[], char eestateaAgentID[]);
    void setEstateAgentDetails(char eestateaAgentID[]);
    void publishAdvertisements();
    void removeAdvertisements();
    double calcAdvertisementFee();
    void displayDetails();
    ~EstateAgent();
};