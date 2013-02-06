#ifndef Flight_h
#define Flight_h

#include "Customer.h"
#include <iostream>
#include <string>
#inlcude <fstream>

class Flight {

 public:
 
    bool isFull();
    bool isEmpty();

    ~Flight();

    Flight();

    void insertFlightNum(int num);
    void insertFlightTime(string time);    
    void addCustomer(Customer &c);

 private:
    int flightNum;
    string timeDate;
    string loc;
    string dest;
    const int cap = 30;
    int count;
    string passengerFileName;
	ofstream guestList.open(passengerFileName);
};

#endif // Flight_h

bool isFull()
{
	if( count <= cap)
		return true;
	else
		return false;
}

bool isEmpty()
{
	if( count == 0 )
		return true;
	else
		return false;
}

Flight(string tD, string lo, string des,string fNum, string guestFile)
{
	
}

Flight()
{
}

void insertFlightNum(int num);
{
}
    
void insertFlightTime(string time)
{
}

    
void addCustomer(Customer &c)
{
}