//Inheritance example: Computer and Laptop classes
//File 3: Laptop.h STARTS HERE
#ifndef LAPTOP_H
#define LAPTOP_H
#include "Computer.h"

namespace pc
{
	// Laptop class: derived from Computer.
	// Adds laptop-specific
	class Laptop : public comp::Computer
	{
	public:
		// Default constructor
		Laptop();

		// Overloaded constructor, using the supplied values
		Laptop(int s, int mm, int hm, int bt, double w);

		// Overridden display_specs():
		//displays both the inherited
		void display_specs(std::ostream& out) const;


		// Accessor: returns the value of the private members
		int get_battime() const;
		double get_weight() const;


	private:
		int battery_time;
		double weight;
	};
} //pc namespace
#endif //LAPTOP_H
//File 3: Laptop.h ENDS HERE