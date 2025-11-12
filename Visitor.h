#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

 public:
     visitor(int ticketsBought, string vistorname) {
         tickets = ticketsBought;
         namevisit  = vistorname;
        
     }

     void displayInfo() {
         cout << "tickets " << ticketsBougt << endl;
         cout << "name " << vistorname << endl;

     }



#endif
