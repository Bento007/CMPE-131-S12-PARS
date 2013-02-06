#ifndef ProduceConfirmationNumber_h
#define ProduceConfirmationNumber_h
/*the confirmation number consists of
the date of the flight followed by the
the flight number, followed by the
customer ID. It will be a total of 20
characters long and will be output as 
follows.
mmddyyyy-ffff-XXXXXXXXXX*/

class ConfirmationNumber {

 public:
	ConfirmationNumber();
    long generateConfirmationNumber();
    // virtual destructor for interface 
	int ~ProduceConfirmationNumber() { };
private:
	long confirmationNumberToGiveOut;
};

ConfirmationNumber::ConfirmationNumber()
{
	confirmationNumberToGiveOut = 0;
}

long ConfirmationNumber:: generateConfirmationNumber()
{
	return confirmationNumberToGiveOut++;
}

#endif // ProduceConfirmationNumber_h
