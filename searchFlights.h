#ifndef SearchFlight_h
#define SearchFlight_h


class SearchFlight {

 public:

    virtual int start()  = 0;

    virtual int stop()  = 0;

    virtual int getFlightList()  = 0;

    virtual int pickFlight()  = 0;

public:
    // virtual destructor for interface 
    virtual ~SearchFlight() { }
};

#endif // SearchFlight_h
