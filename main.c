#include <stdio.h>
#include <string.h>
#include <iostream>
//#include <thread>
//#include <chrono>

//std:cout;
//std::cin;
//std::flush;
//std::string;
//std::this_thread::sleep_for;
//std::chrono::milliseconds;

int slow_print(int, int);
int start_storyline();
int start_questions(int);
int validate_ans(int,int);

int level;

int respond;

    int main()
    {
        std::cout << "Welcome Adventurer!\nwould you like to start?\nEnter Y if yes: ";
        std::cin >> respond;
        
        if (respond == 1){
            start_storyline();
        } else {
            return 0;
        }
        
        return 0;
    }

    int start_storyline()
    {
        std::string str = "The 4 Adventurers\n";
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
        
        std::cout << "(press any key to continue...)";
        
        std::cin.get()// >> respond; //wait for the input
        
        start_questions(1); //iniate questions
        
    }

    int start_questions(int level)
    {
        do{
            switch(level)
            {
                case 1:
                    slow_print("This is a test question.\nA: blah\nB: blahblah", 30);
                    std::cin >> respond;
                    validate_ans(respond, level);
                    
                break;
            }
        } while (level != 0);
    }

    int validate_ans(string ans, int level)
    {
        switch(level)
        {
            case 1:
                if(ans == "a" || ans == "A")
                {
                    start_questions(2);
                } else {
                    std::cout << "Wrong! You have failed";
                    main();
                }
                
            break;
        }
    }

    slow_print(std::string message, int millis_per_char)
    {
        for (char c: message)
        {
            std::cout << c << flush;
            sleep_for(milliseconds(millis_per_char));
        }
    }
