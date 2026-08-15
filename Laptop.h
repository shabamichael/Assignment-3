#ifndef LAPTOP_H
#define LAPTOP_H

#include "Computer.h"


class Laptop : 
//The is-a relationship, Laptop is-a computer
// Laptop class: derived from Computer. Adds laptop-specific
// attributes (battery_time and weight) on top of the inherited
// Computer attributes (speed, main_memory, harddisk_memory).


    public Computer {
public:
    
    Laptop();
    // Default constructor: creates a Laptop object with all
    // attributes (inherited and own) initialised to 0.

    
    Laptop(int s, int mm, int hm, int bt, double w);
    // Overloaded constructor: creates a Laptop object using the
    // supplied speed, main memory, hard disk memory, battery time
    // and weight values. Delegates the Computer-related values to
    // the base class constructor.
    // Overridden display_specs(): displays both the inherited
    // Computer specs and the Laptop-specific specs.


    void display_specs(std::ostream& out) const;

    // Accessor: returns the value of the private member 'battery_time'.
    int get_battime() const;

    // Accessor: returns the value of the private member 'weight'.
    double get_weight() const;

private:
    int battery_time;   // battery life in hours
    double weight;       // weight of the laptop in kg
};

#endif