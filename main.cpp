#include "Advertisement.h"
#include "Document.h"
#include "EstateAgent.h"
#include "Feedback.h"
#include "Land.h"
#include "Landowner.h"
#include "Manager.h"
#include "Payment.h"
#include "RegisteredUser.h"
#include "RegisteredCustomer.h"
#include "Report.h"
#include "Reservation.h"

#include <iostream>
using namespace std;

int main()
{
    RegisteredUser *customer1;
    customer1 = new RegisteredCustomer("Malith Geevinda", "200134767923", "Pollonnaruwa","2001/10/24", "0775283941","malith.g@gmaill.com","RC1001");

    RegisteredUser *manager1;
    manager1 = new Manager("Sehara Munasinghe", "200003567861","Rajagiriya","2000/04/03","0712679005","sehara.m@gmail.com", "MN1001");
    
    RegisteredUser* landowner = new Landowner("Deshagra","200024588954","Bandarawela", "2001/08/31","0711234567","Desha123@gmail.com","LO21285718");
	
	Land* land = new Land("L0001","Badulla",2200000,"Near to Badulla town","80 Purches","Best conditions");

    Reservation *res1=new Reservation("R10020");
    Document *doc1=new Document("D10000","2022/03/29","Legal Document");

    EstateAgent * agent = new EstateAgent("Kajeevan", "200445600516", "Badulla", "12/45", "0708452226" , "deshdder123@gmail.com", "E06745");

    Advertisement * ad = new Advertisement("A4569", "Land", "Normal", "Land for sale in kegalla");

    Report * rep = new Report("R3456", "10/30", "Monthly");

    Payment * payment1 = new Payment("1234","Online","2022.10.5");
    
    Feedback * feedback1 = new Feedback("A123","it was great.","2022.9.5");


    customer1->displayDetails();
    manager1->displayDetails();
    landowner -> displayDetails();
	  land -> displayLandDetails();
    res1->displayReservationDetails();
    doc1->displayDocuments();
    agent->displayDetails();
    ad->displayAdvertisements();
    rep->displayDetails();
    feedback1->displayFeedbackDetails();
    payment1->displayPaymentDetails();
    
    delete customer1;
    delete manager1;
    delete landowner;
    delete land;
    delete res1;
    delete doc1;
    delete agent;
    delete ad;
    delete rep;
    delete payment1;
    delete feedback1;

    return 0;
}