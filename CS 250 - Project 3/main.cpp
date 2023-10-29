// Description: In this Program we are going to figure out how much area as a percent of a place would need
// to be covered in solar panels to be completely reliant on them for electricity, using an ordered list. 
// Author: Grace O'Hara
// Date: October 27th, 2023
//

#include <iostream>
#include <list>
#include "State.hpp"
using namespace std;

void add(list<State> &l, State &place)
{
    list<State>::iterator it;
    list<State>::iterator previous;
    if (l.empty() || ((l.front()).getPercentage() > place.getPercentage())){
        l.push_front(place);
    }
    else {
        previous = l.begin();
        for (auto it = l.begin(); it != l.end(); ++it) {
            if ((*it).getPercentage() > place.getPercentage())
                break;
            else
                previous = it;
        }
        l.insert(++previous,place);
    }
}

int main() {
    
    list<State> states;

    State tx ("Texas", 13480.8, 7487580672000);
    tx.findPercentage();
    cout << tx.getName() << " would use " <<
    tx.getPercentage() << "% of its area" << endl;
    add(states, tx);
    
    State ca ("California", 6922.8, 4563554688000);
    ca.findPercentage();
    cout << ca.getName() << " would use " <<
    ca.getPercentage() << "% of its area" << endl;
    add(states, ca);
    
    State la ("Louisiana", 4200.4, 1445216256000);
    la.findPercentage();
    cout << la.getName() << " would use " <<
    la.getPercentage() << "% of its area" << endl;
    add(states, la);
    
    State fl ("Florida", 4003.1, 1805265792000);
    fl.findPercentage();
    cout << fl.getName() << " would use " <<
    fl.getPercentage() << "% of its area" << endl;
    add(states, fl);
    
    State il ("Illinois", 3612.9, 1614549657600);
    il.findPercentage();
    cout << il.getName() << " would use " <<
    il.getPercentage() << "% of its area" << endl;
    add(states, il);
    
    State pa ("Pennsylvania", 3413.0, 1283967590400);
    pa.findPercentage();
    cout << pa.getName() << " would use " <<
    pa.getPercentage() << "% of its area" << endl;
    add(states, pa);
    
    State oh ("Ohio", 3404.5, 1249649280000);
    oh.findPercentage();
    cout << oh.getName() << " would use " <<
    oh.getPercentage() << "% of its area" << endl;
    add(states, oh);
    
    State ny ("New York", 3354.2, 1520933990400);
    ny.findPercentage();
    cout << ny.getName() << " would use " <<
    ny.getPercentage() << "% of its area" << endl;
    add(states, ny);
    
    State ga ("Georgia", 2727.6, 1656673920000);
    ga.findPercentage();
    cout << ga.getName() << " would use " <<
    ga.getPercentage() << "% of its area" << endl;
    add(states, ga);
    
    State mg ("Michigan", 2610.6, 2696287334400);
    mg.findPercentage();
    cout << mg.getName() << " would use " <<
    mg.getPercentage() << "% of its area" << endl;
    add(states, mg);
    
    
    
    return 0;
    
}
