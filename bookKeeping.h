#ifndef BookKeeping_h
#define BookKeeping_h

#include "Flight.h"
#include "Reservation.h"


class BookKeeping {

 public:

    virtual int clearExpFlights();

    virtual int clearExpPassengers();


 private:
    Flight f_list;
    Reservation p_list;
    int date;
};

#endif // BookKeeping_h
