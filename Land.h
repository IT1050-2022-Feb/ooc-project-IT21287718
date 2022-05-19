//IT21287022
#pragma once
class Land
{
  private:
    char landID[10];
    char landLocation[100];
    double landPrice;
    char landDescription[250];
    char landArea[20];
    char landStatus[50];

  public:
    Land();
    Land(const char lID[],const char lLoc[],double lPrice,const char lDes[],const char lArea[],const char lStatus[]);
    void displayLandDetails();
    void updateLandDetails();
    double calculateLandPrice();
    ~Land();

};
