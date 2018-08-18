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
    str.append("Group name : Gamers Chain\n");
    str.append("Opening song : Can't stop by RHCP\n");
    str.append("Year 1117 may apat na manlalakbay na nag mula sa lugar na tinatawag na The Skull.\n");
    str.append("At Sila ay sina Camille the sorceress, Rodolfo III the Paladin, Rey the Assassin, at si Ivan the Explosive Expert.\n");
    str.append("Isang Araw habang Sila ay nag papahinga. Sila ay naka tanggap ng minsahe o sulat na galing sa ibang lugar at ito ay binasa ni Camille at ang sabi sa sulat ay.\n");
    str.append("Tulungan nyo kame sinasalakay kami ng grupo ng mga Pirata... At ang mensahing iyon ay galing sa lugar ng \n");
    str.append("At ang mensahing iyon ay galing sa lugar ng Mirza...matapos na mabasa ito ni Camille ay agad silang nag handa para sa pag lalakbay..............\n");
    str.append("Makalipas ang isang oras na paglalakad may na pansin c Rey na parang may naka sunod sa kanila..\n");
    str.append("Rey : mga kasama may nararamdaman akong nakasunod humanda kayo..\n");
    str.append("Ivan : mukang may sasabog nanaman ngayung Araw nato.. (Naka ngiting sinabi).\n");
    str.append("Habang sa patuloy na pag lalakad isang bala ng pana ang dumaan sa harap ni rodolfo. At ito tumusok sa kalapit na puno...\n");
    str.append("");
    str.append("");
    str.append("");
    
    slow_print(str, 30);
    
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
