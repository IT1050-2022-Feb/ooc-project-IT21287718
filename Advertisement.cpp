//IT21287718
#include "Advertisement.h"
#include <cstring>
using namespace std;

Advertisement::Advertisement()
{
  strcpy(advertisementID,"");
  strcpy(advertisementTitle,"");
  strcpy(advertisementType,"");
  strcpy(advertisementDescription,"");
}
Advertisement::Advertisement(char aID[], char aTitle[], char aType[], char aDes[])
{
  strcpy(advertisementID, aID);
  strcpy(advertisementTitle, aTitle);
  strcpy(advertisementType, aType);
  strcpy(advertisementDescription, aDes);
  
}
void Advertisement::addAdvertisements(EstateAgent *E)
{
  
}
void Advertisement::editAdvertisements()
{
  
}
void Advertisement::deleteAdvertisements()
{
  
}
void Advertisement::renewAdvertisements()
{
  
}
void Advertisement::displayAdvertisements()
{
  cout<<"Advertisement ID : "<<advertisementID<<endl;
  cout<<"Advertisement Title : "<<advertisementTitle<<endl;
  cout<<"Advertisement Type : "<<advertisementType<<endl;
  cout<<"Advertisement Description : "<<advertisementDescription<<endl;
  
}
Advertisement::~Advertisement()
{
  cout<<"Distructor runs for adverticement"<<endl;
}