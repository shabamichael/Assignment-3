//Implementation for the Derived class Laptop

#include "Laptop.h"

using namespace pc;


Laptop::Laptop() : Computer(), battery_time(0), weight(0.0) {}
// Default constructor implementation:
// calls the base class default constructor to initialise the
// inherits Computer attributes and initialises battery_time and weight to 0.




Laptop::Laptop(int s, int mm, int hm, int bt, double w) : 
    Computer(s, mm, hm), battery_time(bt), weight(w) {}
// Overloaded constructor implementation:
// invokes the base class overloaded constructor Computer(s, mm, hm)
// to initialise the inherited attributes, then initialises the
// Laptop-specific attributes battery_time and weight.




void Laptop::display_specs(std::ostream& out) const
{
    Computer::display_specs(out);   // reuse base class display logic
    out << "Battery time: " << battery_time << " hours\n";
    out << "Weight: " << weight << " kg\n\n\n";
}
// Overridden display_specs implementation:
// first calls the base class version to print the inherited Computer attributes, 
// then prints the additional Laptop attributes (battery time and weight).




int Laptop::get_battime() const { return battery_time; }
// Getter,  get_battime implementation:
// returns the current value of the private 'battery_time' member.




double Laptop::get_weight() const { return weight; }
//Getter, get_weight implementation:
// returns the current value of the private 'weight' member.