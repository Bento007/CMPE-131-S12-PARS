#ifndef MakeReservation_h
#define MakeReservation_h
/* 
 * See PARS, this class may not be neccessary
 */

class MakeReservation {

 public:

    int getCustomerInfo();

    int verifyCustomerInfo()  = 0;

    int getPaymentInfo()  = 0;

    int verifyPayment()  = 0;

    int updateFlightGuestList()  = 0;

public:
    // virtual destructor for interface 
    ~MakeReservation() { }
};

#endif // MakeReservation_h
