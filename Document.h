//IT21286032
#pragma once
#include "RegisteredCustomer.h"
#include "Landowner.h"
#define SIZE1 5
#define SIZE2 5

class Document{
  private:
    char documentID[20];
    char documentDate[20];
    char documentType[20];

    RegisteredCustomer *regcus[SIZE1];
    Landowner *owner[SIZE2];


  public:
    Document();
    Document(char pdocumentID[20],char pdocumentDate[10],char pdocumentType[20]);
    void addDocuements();
    void displayDocuments();
    void reviewDocument();
    ~Document();



};
    
      
    
};