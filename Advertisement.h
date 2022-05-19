//IT21287718
#include<iostream>
#include"Land.h"
#include"EstateAgent.h"
using namespace std;

class Advertisement{
  private:
    char advertisementID[20];
    char advertisementTitle[20];
    char advertisementType[20];
    char advertisementDescription[50];

    Land *land;
  
  public:
    Advertisement();
    Advertisement(char aID[], char aTitle[], char aType[], char aDes[]);
    void addAdvertisements(EstateAgent *E);
    void editAdvertisements();
    void deleteAdvertisements();
    void renewAdvertisements();
    void displayAdvertisements();
    ~Advertisement();
  
};