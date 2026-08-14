#include <iostream>
#include "Computer.h"
using std::cout;

// Driver program purpose:
// 1. Instantiate a Computer object with specific specs.
// 2. Display those specs using the accessor functions.
// 3. Display the same specs using the display_specs() member function.
int main() {
    // Create a Computer object: speed 1600 MHz, 4 GB RAM, 16 GB hard disk.
    Computer myComputer(1600, 4, 16);

    // Section: display specifications using the individual accessor
    // functions get_speed(), get_mmemory() and get_hmemory().
    cout << "Specifications Using Accessor Functions:\n";
    cout << "Speed: " << myComputer.get_speed() << " MHz\n";
    cout << "Main memory: " << myComputer.get_mmemory() << " GB\n";
    cout << "Hard disk memory: " << myComputer.get_hmemory() << " GB\n\n";

    // Section: display specifications using the display_specs()
    // member function, writing directly to cout.
    cout << "Specifications using display_specs():\n";
    myComputer.display_specs(cout);

    return 0;
}