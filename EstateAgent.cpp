//IT21287718
#include "EstateAgent.h"
#include "RegisteredUser.h"
#include <cstring>

EstateAgent::EstateAgent()
{
  strcpy(name, "");
  strcpy(nic, "");
  strcpy(address, "");
  strcpy(dob, "");
  strcpy(contactNo, "");
  strcpy(email, "");
  strcpy(estateaAgentID, "");
}
EstateAgent::EstateAgent(char ename[], char enic[], char eaddress[], char edob[], char econtactNo[], char eEmail[], char eestateaAgentID[]) : RegisteredUser(ename, enic, eaddress, edob, econtactNo, eEmail)
{
  strcpy(estateaAgentID, eestateaAgentID);
}
void EstateAgent::setEstateAgentDetails(char eestateaAgentID[])
{
  strcpy(estateaAgentID, "eestateaAgentID");
}
void EstateAgent::publishAdvertisements()
{
  
}
void EstateAgent::removeAdvertisements()
{
  
}
double EstateAgent::calcAdvertisementFee()
{
  
}
void EstateAgent::displayDetails()
{
  cout<<"Name : "<<name<<endl;
  cout<<"NIC : "<<nic<<endl;
  cout<<"Address : "<<address<<endl;
  cout<<"Date of birth : "<<dob<<endl;
  cout<<"Conract no : "<<contactNo<<endl;
  cout<<"Email : "<<email<<endl;
  cout<<"Agent ID : "<<estateaAgentID<<endl;
}
EstateAgent::~EstateAgent()
{
  cout<<"Distructor for estate agent runs"<<endl;
}