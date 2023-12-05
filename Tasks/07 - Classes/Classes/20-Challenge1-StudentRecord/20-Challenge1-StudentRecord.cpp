#include <iostream>
#include "StudentRecord.h"
using namespace std;

int main()
{
    cout << "Challenge 1\n";
    StudentRecord student1("Les", "Leyton", 12345);
    student1.display();
    
    
    //Test remaining member functions here
    student1.getFullName();
    student1.getID();
    student1.updateFirstName("David");
    string full = student1.getFullName();
    cout << "full name: " << full << endl;
    student1.display();
    student1.updateLastName("Smith");
    string full1 = student1.getFullName();
    cout << "full name: " << full1 << endl;
    student1.display();

}
