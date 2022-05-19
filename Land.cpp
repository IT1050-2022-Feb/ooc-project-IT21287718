//IT21287022
#include <iostream>
#include <cstring>
#include "Land.h"
#include <iomanip>
using namespace std;

Land::Land()
{
  strcpy(landID,"");
  strcpy(landLocation,"");
  landPrice = 0;
  strcpy(landDescription,"");
   strcpy(landArea,"");
  strcpy(landStatus,"");
}

Land::Land(const char lID[],const char lLoc[],double lPrice,const char lDes[],const char lArea[],const char lStatus[])
{
   strcpy(landID,lID);
  strcpy(landLocation,lLoc);
  landPrice = lPrice;
  strcpy(landDescription,lDes);
  strcpy(landArea,lArea);
  strcpy(landStatus,lStatus);
}

void Land::displayLandDetails()
{
  cout<<"land ID: "<<landID<<endl<<"Land Location: "<<landLocation<<endl<<"Land Price: "<<setprecision(10)<<landPrice<<endl<<"land Description: "<<landDescription<<endl<<"Land Area: "<<landArea<<endl<<"Land Status: "<<landStatus<<endl<<endl;
    cout<<"******************************"<<endl<<endl;
}
void Land::updateLandDetails()
{

}
double Land:: calculateLandPrice()
{
  return 0;
}
Land:: ~Land()
{

}