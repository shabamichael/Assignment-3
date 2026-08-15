//Interface for the Base Class Computer
#ifndef COMPUTER_H
#define COMPUTER_H


#include <iostream>

namespace comp  
{

    class Computer {
        //Computer the parent class or the base class

    public:
       
        Computer();
        // Default constructor:creates a Computer object with all attributes initialised to 0.

        
        Computer(int s, int mm, int hm);
        // Overloaded constructor: creates a Computer object using the
        // supplied speed, main memory and hard disk memory values.

        
        void display_specs(std::ostream& out) const;
        // Displays the specifications (speed, main memory, hard disk
        // memory) of the Computer object to the given output stream.



        int get_speed() const;
        // Accessor: returns the value of the private member 'speed'.




        int get_mmemory() const;
        // Accessor: returns the value of the private member 'main_memory'.



        int get_hmemory() const;
        // Accessor: returns the value of the private member 'harddisk_memory'.



    private:
        int speed;             
        // processor speed in MHz
        

        int main_memory;       
        // main memory (RAM) in GB


        int harddisk_memory;   
        // hard disk storage in GB
    };


} //computersystem


#endif