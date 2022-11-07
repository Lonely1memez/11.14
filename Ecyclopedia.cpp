#include "Encyclopedia.h"

#include <iostream>

void Encyclopedia::SetEdition(string bookedition)
{

  edition = bookedition;

}

void Encyclopedia::SetNumVolumes(int volumns)
{

numVolumes = volumns; 

}

string Encyclopedia::GetEdition()
{

return edition; 

}

int Encyclopedia::GetNumVolumes()
{

return numVolumes; 

}



void Encyclopedia::PrintInfo() 
{

  cout << "Encyclopedia Information: " << endl;

  cout << "   Book Title: " << title << endl;

  cout << "   Author: " << author << endl;

  cout << "   Publisher: " << publisher << endl;

  cout << "   Publication Date: " << publicationDate << endl;

  cout << "   Edition: " << edition << endl;

  cout << "   Volumn Number: " << numVolumes << endl;

}