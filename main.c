#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using std::cout;
using std::cin;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void slow_print(const string&, unsigned int);
void start_storyline();
void start_questions(unsigned int);
void validate_ans(const string&, unsigned int);

int level;

string respond;

    int main()
    {
        cout << "Welcome Adventurer!\nwould you like to start?\nEnter Y if yes: " << flush;
        cin >> respond;
        
        if (respond == "y" || respond == "Y"){
            start_storyline();
        } else {
            return 0;
        }
        
        return 0;
    }

    void start_storyline()
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

        slow_print(str, 30);
        
        cout << "(press any key to continue...)";
        
        cin >> respond; //wait for the input
        
        start_questions(1); //iniate questions
        
    }

    void start_questions(unsigned int level)
    {
        do{
            switch(level)
            {
                case 1:
                    slow_print("This is a test question.\nA: blah\nB: blahblah", 30);
                    cin >> respond;
                    validate_ans(respond, level);
                    
                break;
            }
        } while (level != 0);
    }

    void validate_ans(const string& ans, unsigned int level)
    {
        switch(level)
        {
            case 1:
                if(ans == "a" || ans == "A")
                {
                    start_questions(2);
                } else {
                    cout << "Wrong! You have failed";
                    main();
                }
                
            break;
        }
    }

    void slow_print(const string& message, unsigned int millis_per_char)
    {
        for (const char c: message)
        {
            cout << c << flush;
            sleep_for(milliseconds(millis_per_char));
        }
    }
