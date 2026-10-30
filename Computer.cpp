//File 2: Computer.cpp STARTS HERE
#include "Computer.h"
#include <iostream>



namespace comp
{

	// Default constructor:- initialises members to 0
	//Computer::Computer() : speed(0), main_memory(0), harddisk_memory(0) {}
	Computer::Computer()
	{
		this->speed = 0;
		this->main_memory = 0;
		this->harddisk_memory = 0;
	}
	// Overloaded constructor initialises the
	// data members to the caller-supplied
	//Computer::Computer(int s, int mm, int hm) : speed(s), main_memory(mm), harddisk_memory(hm) {}
	Computer::Computer(int s, int mm, int hm)
	{
		this->speed = s;
		this->main_memory = mm;
		this->harddisk_memory = hm;
	}
	// display_specs implementation:-
	void Computer::display_specs(std::ostream& out) const {
		out << "Speed: " << speed << " MHz" << std::endl;
		out << "Main memory: " << main_memory << " GB" << std::endl;
		out << "Hard disk memory: " << harddisk_memory << " GB" << std::endl;
	}
	// Accessor / Getter function
	int Computer::get_speed() const 
	{ 
		return this->speed; 
	}
	int Computer::get_mmemory() const 
	{ 
		return this->main_memory; 
	}
	int Computer::get_hmemory() const 
	{ 
		return this->harddisk_memory; 
	}
}
//File 2: Computer.cpp ENDS HERE