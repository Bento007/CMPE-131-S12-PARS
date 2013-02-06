/* Flight */


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Flight {
      
public:
   Flight () {
      string s;
      int i;
      cout << "============Add a new Flight===========" << endl;
	   cout << "Enter Flight Number:
      cin >> i;
      setFlightNum(i);
      cout << "Enter Flight Time:
      cin >> s;
      setFlightTime(s);
      cout << "Enter Flight Location:
      cin >> s;
      setLoc(s);
      cout << "Enter Flight Destination:
      cin >> s;
      setDest(s);        
	   cout << "=============Flight Added==============" << endl;
	   
   }  
   
   string getFlightNum() { return flightname; }
   string getLoc() { return loc; }
   string getDest() { return dest; }
   
   void setFlightNum(int num) { flightNum = num; } 
   void setFlightTime(string time) { timeDate = time; } 
   void setLoc(string location) { loc = location; } 
   void setDest(string destination) { dest = destination; } 
   
   bool isFull() { return count == cap;}
   bool isEmpty() { return (cap-count) == 0; }
   bool remain() { return cap - count; }
    
   void addCustomer(Customer &c) {
      count++;
   
   
   }
   // void saveToFile()
   
private:
    int flightNum;
    string timeDate;
    string loc;
    string dest;
    const int cap = 30; //-- should be a constant
    int count;
    string passengerFileName;
    
};
