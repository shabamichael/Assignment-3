//File 4: Laptop.cpp STARTS HERE
#include "Laptop.h"
using namespace pc;


// Default constructor
Laptop::Laptop() : Computer(), battery_time(0), weight(0.0) {}


// Overloaded constructor implementation
Laptop::Laptop(int s, int mm, int hm, int bt, double w) :
	Computer(s, mm, hm), battery_time(bt), weight(w) {
}
// Overridden display_specs implementation:
void Laptop::display_specs(std::ostream& out) const
{
	Computer::display_specs(out);
	out << "Battery time: " << battery_time << " hours\n";
	out << "Weight: " << weight << " kg\n\n\n";
}
// Getters Functions Implementation:
int Laptop::get_battime() const { return battery_time; }
double Laptop::get_weight() const { return weight; }
//File 4: Laptop.cpp ENDS HERE