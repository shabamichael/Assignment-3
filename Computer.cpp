#include "Computer.h"

// Default constructor implementation:
// initialises all data members to 0 when no values are supplied.
Computer::Computer() 
    : speed(0), main_memory(0), harddisk_memory(0) {}

// Overloaded constructor implementation:
// initialises the data members with the caller-supplied values
// using a member initialisation list.
Computer::Computer(int s, int mm, int hm)
    : speed(s), main_memory(mm), harddisk_memory(hm) {}

// display_specs implementation:
// writes each attribute of the Computer object, one per line,
// to the output stream passed in by the caller.
void Computer::display_specs(std::ostream& out) const {
    out << "Speed: " << speed << " MHz" << std::endl;
    out << "Main memory: " << main_memory << " GB" << std::endl;
    out << "Hard disk memory: " << harddisk_memory << " GB" << std::endl;
}

// get_speed implementation:
// returns the current value of the private 'speed' member.
int Computer::get_speed() const { return this->speed; }

// get_mmemory implementation:
// returns the current value of the private 'main_memory' member.
int Computer::get_mmemory() const { return this->main_memory; }

// get_hmemory implementation:
// returns the current value of the private 'harddisk_memory' member.
int Computer::get_hmemory() const { return this->harddisk_memory; }