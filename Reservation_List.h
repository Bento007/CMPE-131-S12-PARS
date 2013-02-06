#ifndef Reservation_List_h
#define Reservation_List_h

#include "Reservation.h"
#include <fsteam>
// this will contain all the reservation across all of the flights
class Reservation_List {

 public:

    virtual ~Reservation_List();

    virtual void searchByName();

    Reservation_List();

    virtual void searchByCon();

    virtual int newOperation();


 private:
    Reservation res[30];
    int flight_Num;
    fstream guestList;
};

#endif // Reservation_List_h
