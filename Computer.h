#ifndef COMPUTER_H
#define COMPUTER_H


#include <iostream>
using namespace std;

// ==================== 3.1 Implement class Computer ====================

// Computer class: models a basic computer with speed, main memory
// and hard disk memory as its core attributes.
class Computer 
{ 
public:
	// Default constructor: Initializes member variables to zero/default values
	Computer(); 

	Computer(int s, int mm, int hm); 
	void display_specs(ostream& out)const; 
	int get_speed()const; 
	int get_mmemory()const; 
	int get_hmemory()const;

private: int speed; 
	   int main_memory; 
	   int harddisk_memory; 
};


#endif