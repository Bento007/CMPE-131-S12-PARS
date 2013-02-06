#ifndef Reservation_h
#define Reservation_h

#include "Customer.h"
#include "Flight.h"
#include "Payment.h"
#include <iostream>
using namespace std;

class Reservation {

 public:

    Reservation();

    virtual int newOperation();

    virtual int newOperation();


 private:
    Flight infoF;
    Customer customer;
    Payment infoP;
    char confirmation[32];
    bool baggage;
    bool disability;
    char timeStamp;
};

Reservation::Reservation()
{

}

#endif // Reservation_h
