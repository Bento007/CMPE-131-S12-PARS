#ifndef GenerateReport_h
#define GenerateReport_h


class GenerateReport {

 public:

    virtual int companyReport()  = 0;

public:
    // virtual destructor for interface 
    virtual ~GenerateReport() { }
};

#endif // GenerateReport_h
