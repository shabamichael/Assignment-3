//File 1: Computer.h STARTS HERE
#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
namespace comp
{
	//Computer the parent class or the base class
	class Computer {
	public:
		// Default constructor:creates a Computer object
		//with all attributes initialised to 0.
		Computer();
		// Overloaded constructor:using the supplied values.
		Computer(int s, int mm, int hm);
		// Displays the specifications
		void display_specs(std::ostream& out) const;
		// Accessor Functions: returns the value of the
		//private members
		int get_speed() const;
		int get_mmemory() const;
		int get_hmemory() const;
	private:
		int speed;
		int main_memory;
		int harddisk_memory;
	};
} //computersystem
#endif
//File 1: Computer.h ENDS HERE