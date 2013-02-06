#ifndef Flight_List_h
#define Flight_List_h

#include "Flight.h"
#include <vector>
#include <iostream>


class Flight_List{

 public:

    void searchByDate();
    void searchByDest();
    void searchByLoc();
    void getFlightList();
    void getAvailibleFlights();
    void insertFlight();
    void Flight_List();
	
    Flight_List();
    ~Flight_List();


 private:
    vector<Flight> flight_list;
    int number_flights;
    string flight_list_data_fileName;// or should it be a file stream?
};

#endif // Flight_List_h
