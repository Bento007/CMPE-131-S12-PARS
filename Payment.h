#ifndef Payment_h
#define Payment_h


class Payment {

 public:

    virtual ~Payment();

    virtual int changeCCinfo();

    virtual int changeAmount();

    virtual int submitRecipt();

    Payment();


 private:
    char cc_info[64];
    char expirationDate[9];
    char cc_Holder [64];
    char securityCode[4];
    char company[10];
    char billingAddress[64];
    float payAmount;
    bool valid;
};

#endif // Payment_h
