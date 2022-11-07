#ifndef ENCYCLOPEDIAH

#define ENCYCLOPEDIAH

#include "Book.h"

class Encyclopedia : public Book 
{

  public:

    void SetEdition(string bookedition);
    void SetNumVolumes(int volumns);

    string GetEdition();
    int GetNumVolumes();

    void PrintInfo();



private:

string edition;

int numVolumes;

};

#endif