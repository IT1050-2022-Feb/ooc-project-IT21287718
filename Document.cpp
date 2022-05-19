//IT21286032
#include<iostream>
#include "Document.h"
#include<cstring>

using namespace std;

Document::Document(){
  strcpy(documentID,"");
  strcpy(documentDate,"");
  strcpy(documentType,"");
}

Document::Document(char pdocumentID[20],char pdocumentDate[10],char pdocumentType[20]){
  strcpy(documentID,pdocumentID);
  strcpy(documentDate,pdocumentDate);
  strcpy(documentType,pdocumentDate);
}

void Document::addDocuements()
{

}

void Document::displayDocuments()
{
  cout << "documentID:"<<documentID<<endl;
  cout<<"Date that document submitted:"<<documentDate<<endl;
  cout<<"Document Type:"<<documentType<<endl;
  cout<<"**"<<endl<<endl;
}

void Document::reviewDocument()
{

}

Document::~Document()
{
  //destructor
  for(int i=0; i<SIZE1; i++)
    {
      delete regcus[i];
    }

  for(int j=0; j<SIZE2; j++)
    {
      delete owner[j];
    }
}