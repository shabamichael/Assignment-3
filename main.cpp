//File 5: main.cpp STARTS HERE
#include <iostream>
#include "Computer.h"
#include "Laptop.h"
using std::cout;


int main()
{
	// --- 3.2 Test Computer ---
	// Create a Computer object:
	//speed 1600 MHz, 4 GB RAM, 16 GB hard disk.
	comp::Computer myComputer(1600, 4, 16);



	// PURPOSE: Test accessor functions
	// Section: display specifications using
	// the individual accessor
	cout << "=================== Computer ====================\n";
	cout << "Computer Specifications using Accessor Functions:\n";
	cout << "Speed: " << myComputer.get_speed() << " MHz\n";
	cout << "Main memory: " << myComputer.get_mmemory() << " GB\n";
	cout << "Hard disk memory: " << myComputer.get_hmemory() << " GB\n";
	cout << "\n_____________________________________________\n";


	// PURPOSE: Test member display function
	// Section: display specifications using
	//the display_specs()
	cout << "Computer Specifications Using display_specs():\n";
	myComputer.display_specs(cout);
	cout << std::endl;
	cout << std::endl;


	// --- 3.4 Test Laptop ---
	// Laptop object: speed 1333 MHz, 2 GB RAM,
	// 8 GB hard disk, 8 hours battery time, 1.25 kg weight.
	pc::Laptop myLaptop(1333, 2, 8, 8, 1.25);
	// Section: display Laptop specifications using
	// accessor functions.
	cout << "==================== Laptop ====================\n";
	cout << "Laptop specifications Using Accessor Functions:\n";
	cout << "Speed: " << myLaptop.get_speed() << " MHz\n";
	cout << "Main memory: " << myLaptop.get_mmemory() << " GB\n";
	cout << "Hard disk memory: " << myLaptop.get_hmemory() << " GB\n";
	cout << "Battery time: " << myLaptop.get_battime() << " hours\n";
	cout << "Weight: " << myLaptop.get_weight() << " kg\n";
	cout << "\n_____________________________________________\n";
	// Section: display specifications using the
	// overridden display_specs() function
	cout << "Laptop specifications Using display_specs():\n";
	myLaptop.display_specs(cout);
	return 0;
}
//File 5: main.cpp ENDS HERE