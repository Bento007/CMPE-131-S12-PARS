/* PARS */
/* Modified by Jonathan Wang. I have the original file. Let me know if I need to 
 * recover.
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class PARS {
public:
   PARS () {
       
   }   
   void run() {
      int i;
      while (i = -1) {
         cout << "============Parry Air Menu:============" << endl;
		   cout << "1. Make Reservation" << endl;
		   cout << "2. Add Flight" << endl;
		   cout << "3. Generate Report" << endl;
		   cout << "0. Exit program" << endl;
		   cout << "=======================================" << endl;
         cout << "Input: ";
		   cin >> i;
		   
   		if (i == 0) {
            i = -1;
   		}
		   if (i == 1) {
            reservation();
   		}
   		else if (i == 2) {
            addFlight();
         }
   		else if (i == 3) {
            generateReport();
   		}
   		else {
   			cout << "Invalid entry!!!" << endl;
   		}   
      }
   }
   void reservation() {
      int i;
      string s;
      //flightList; -- flight[] or other data structure defined in fDBM; 
      //Customer cust; -- asks for inputs in customer default constructor.                                        
      
      cout << "==========Search Flight Menu===========" << endl;
      cout << "1. By Date" << endl;
		cout << "2. By Location" << endl;
		cout << "3. By Desination" << endl;
		cout << "0. Exit" << endl;
	   cout << "=======================================" << endl;
      cout << "Input: ";
      cin >> i;		
      if (i == 0) {
         i = -1;
		}
      if (i == 1) {
         cout << "Enter a Date: ";
         cin >> s;		
         //flightList = fDBM.searchByDate(s); -- return a list of flights
		}
		else if (i == 2) {
         cout << "Enter the Location: ";
         cin >> s;		
         //flightList = fDBM.searchByLocation(s); -- return a list of flights
		}
		else if (i == 3) {
         cout << "Enter the Destination: ";
         cin >> s;		
         //flightList = fDBM.searchByLocation(s); -- return a list of flights
		}
   	else {
   		cout << "Invalid entry!!!" << endl;
   	}
   	
      cout << "============Select a Flight============" << endl;
      //cout << flightlist
	   cout << "=======================================" << endl;
	   cout << "Input: ";
      //flight f;
      //cin >> f;
	   
	   if (makePayment()) {
         //flight.addCustomer(cust);
      }
      else {
         // either do nothing and return to the main menu, 
         // or loop this process until the payment is confirmed or exceed 
         // certain number of trials
      }
   }
   void addFlight() {
      // Flight f -- asks for inputs in customer default constructor. 
      // fDBM.addFlight(f);  
   }
   bool makePayment(){
   
   }
   
   void generateReport(){
      
   } 
private:
   //FlightDBM fDBM; -- I am not sure what class is going to handle the flight 
   //                -- so I made up one rename the type to the correct one
   //CustomerDBM cDBM; -- I am not sure Whether we need this or not. It would 
   //                  -- be easier for us to calculate the revenue and report
};


int main ()
{
   PARS parryAir;
	string userName;
	string passWord;
	cout << "Enter user name and Password" << endl;
	cout << "Username:" ;
	cin >> userName;
	cout << "Password:";
	cin >> passWord;
   parryAir.run();
	cout << "Thanks for using the Perry Air reservation system!" << endl;
	return 0;
}
