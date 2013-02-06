#ifndef Customer_h
#define Customer_h

#include <string>
#include <ctime>
//Completed Customer Class on 5/4/2012 -Trent Smith
class Customer{

	public:

    //void insertInfo(string first, string middle, string last);

    //int emailConfirmationCode();

    //void emailBoardingInformation();
		//Setters
		void setNameF(string );//pass in string first name
		void setNameM(string);	//pass in string middle name
		void setIdNum(string);	//pass in string id number
		void setPhone(string);	//pass in phone number
		void setNameL(string );//pass in string last name
		void setDOB(int, int, int);// pass in  month, day, year
		void setAddress(string); //pass in string address
		void setEmail(string eml);//pass in string email
		
		//Getters
		string getNameF();
		string getNameM();
		string getNameL();
		string getIdNum();
		struct tm getDOB();
		string getAddress();
		string getEmail();
		
		
		bool verifyAge();//confirms age is over 18
		
		//constructor
		Customer(string add, string nF, string nM, 
			string nL, string phn, string eml, 
			int m, int d, int y); 	//pass in strings address, first name, middle name
									//last name, phone number, email, and int month,
									//day, year
		//Destructor
		~Customer();
		
	private:
		string address;		//
		string nameM;		//
		string nameL;		//
		string phone;		//
		string email;		//
		struct tm DOB;
		string idNum;
		string nameF;
};

Customer::Customer(string add, string nF, string nM, 
	string nL, string phn, sting eml, int m, int d, 
	int y)
{	
	nameF=nF;
	nameM=nM;
	nameL=nL;
	address=add;
	phone=phn;
	email=eml;
	DOB.tm_mday = d;
	DOB.tm_mon = m;
	DOB.tm_year = y;
}

void Customer::setNameF(string firstName)
{
	nameF = firstName;
}

void Customer::setNameL(string lastName)
{
	nameL = lastName;
} 
void Customer::setNameDOB(int m, int d, int y)
{
	DOB.tm_mday = d;
	DOB.tm_mon = m;
	DOB.tm_year = y;
}

void Customer::setNameM(string m)
{	
	nameM = m; 
};

void Customer::setIdNum(string id)
{	
	idNum=id;
};
	
void Customer::setPhone(string p)
{
	phone = p;
};

void Customer::setAddress(string add)
{
	address = add;
};

void Customer::setEmail(string eml)
{
	email = eml;
};
string Customer::getNameF()
{
	 return nameF;
};
string Customer::getNameM()
{
	return nameM;
};
string Customer::getNameL()
{
	return nameL;
};
string Customer::getIdNum()
{
	return idNum;
};
struct tm Customer::getDOB()
{
	return DOB;
};
string Customer::getAddress()
{
	return address;
};
string Customer::getEmail()
{
	return email;
};

Customer::~Customer()
{
}

bool Customer::verifyAge()
{
    time_t rawtime;
	struct tm DOB, *today;
	int month, day, year;
	
	DOB.tm_mon = DOB.tm_mon-1;
	DOB.tm_year = DOB.tm_year-1900;
	
	time( &rawtime );
	today = localtime( &rawtime );
	
	day = today->tm_mday - DOB.tm_mday;
	month = today->tm_mon - DOB.tm_mon;
	year = today->tm_year - DOB.tm_year;
        
    if(month > 0)//birthday hasn't come yet this year
        year++;
    
    if( month ==0 && day >=0 )//birthday hasn't come yet this month
        year++;
        
    if( year >= 18 )
        return true;    
    else
        return false;
}

#endif // Customer_h
