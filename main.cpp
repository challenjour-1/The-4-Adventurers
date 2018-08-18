#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include <chrono>

// Name space resolutions /
using std::cout;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

// Forward declare the slow_print function
void slow_print(const string&, unsigned int);

// Main function
int main()
{
    string str = "The 4 Adventurers\n";
    
    str.append("- Created by Mollejon The Writer of Group -\n");
    str.append("Group name : Gamers Chain");
    str.append("Opening song : Can't stop by RHCP");
    
    slow_print(str, 100);
    
    return 0;
}

// Implement the slow_print function
/**
 * Function to print each character in a string with a delay (a "typewriter" effect)
 * @param message         The string to print
 * @param millis_per_char Milliseconds to take to print each character
 */
void slow_print(const string& message, unsigned int millis_per_char)
{
    // Range loops are "for each" constructs; here: for each character in the string
    for (const char c: message)
    {
        // flush is used to make sure the buffer is emptied to the terminal immediately
        cout << c << flush;

        // Ask the thread to sleep for at least n millis.
        sleep_for(milliseconds(millis_per_char));
    }
}
