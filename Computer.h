#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>

// Computer class: models a basic computer with speed, main memory
// and hard disk memory as its core attributes.
class Computer {
public:
    // Default constructor: creates a Computer object with all
    // attributes initialised to 0.
    Computer();

    // Overloaded constructor: creates a Computer object using the
    // supplied speed, main memory and hard disk memory values.
    Computer(int s, int mm, int hm);

    // Displays the specifications (speed, main memory, hard disk
    // memory) of the Computer object to the given output stream.
    void display_specs(std::ostream& out) const;

    // Accessor: returns the value of the private member 'speed'.
    int get_speed() const;

    // Accessor: returns the value of the private member 'main_memory'.
    int get_mmemory() const;

    // Accessor: returns the value of the private member 'harddisk_memory'.
    int get_hmemory() const;

private:
    int speed;             // processor speed in MHz
    int main_memory;       // main memory (RAM) in GB
    int harddisk_memory;   // hard disk storage in GB
};

#endif