#include <iostream>
#include "Computer.h"
#include "Laptop.h"

using std::cout;

// Driver program purpose:
// 1. Instantiate a Computer object with specific specs.
// 2. Display those specs using the accessor functions.
// 3. Display the same specs using the display_specs() member function.
int main() {
    // --- 3.2 Test Computer ---
    // Create a Computer object: speed 1600 MHz, 4 GB RAM, 16 GB hard disk.
    Computer myComputer(1600, 4, 16);

    // PURPOSE: Test accessor functions
    // Section: display specifications using the individual accessor
    // functions get_speed(), get_mmemory() and get_hmemory().
    cout << "============ Computer =============\n";
    cout << "Computer Specifications using Accessor Functions:\n";
    cout << "Speed: " << myComputer.get_speed() << " MHz\n";
    cout << "Main memory: " << myComputer.get_mmemory() << " GB\n";
    cout << "Hard disk memory: " << myComputer.get_hmemory() << " GB\n\n";

    // PURPOSE: Test member display function
    // Section: display specifications using the display_specs()
    // member function, writing directly to cout.
    cout << "Computer Specifications Using display_specs():\n";
    myComputer.display_specs(cout);
    cout << std::endl;
    cout << std::endl;


// Driver program purpose:
// 1. Instantiate a Laptop object with specific specs (including
//    the Laptop-specific battery time and weight).
// 2. Display those specs using the accessor functions (inherited
//    accessors plus the Laptop's own accessors).
// 3. Demonstrate polymorphic behaviour via the overridden
//    display_specs() function.
    
// --- 3.4 Test Laptop ---
// Create a Laptop object: speed 1333 MHz, 2 GB RAM, 8 GB hard disk,
// 8 hours battery time, 1.25 kg weight.
Laptop myLaptop(1333, 2, 8, 8, 1.25);

// Section: display specifications using accessor functions.
// get_speed(), get_mmemory(), get_hmemory() are inherited from
// Computer; get_battime() and get_weight() belong to Laptop.
cout << "============= Laptop =============\n";
cout << "Laptop specifications Using Accessor Functions:\n";
cout << "Speed: " << myLaptop.get_speed() << " MHz\n" ;
cout << "Main memory: " << myLaptop.get_mmemory() << " GB\n";
cout << "Hard disk memory: " << myLaptop.get_hmemory() << " GB\n" ;
cout << "Battery time: " << myLaptop.get_battime() << " hours\n" ;
cout << "Weight: " << myLaptop.get_weight() << " kg\n\n";


// Section: display specifications using the overridden
// display_specs() function, showing both Computer and Laptop specs.
cout << "Laptop specifications Using display_specs():\n";
myLaptop.display_specs(cout);

    return 0;
}