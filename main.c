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
        str.append("Rodolfo : Wooow muntik na ko dun Ahh... (Pabirong sinabi).\n");
        str.append("Rodolfo : mga Kasama humanda sa pag sugod.. (Habang naka taas ang kamay).\n");
        str.append("At nag simula ang Laban sa pagitan ng 4 na manlalakbay at ang mga Kawatan o Mag nanakaw...\n");
        str.append("Makalipas ang kalahating oras na labanan nag wagi ang 4 na manlalakbay Laban sa mga mag nanakaw..\n");
        str.append("Camille : Mga kasama meron bang na saktan...\n");
        str.append("Rodolfo : Ayus lng kami.'\n");
        str.append("Rey : Ayus lng ehh ikaw jan Ivan..\n");
        str.append("Ivan : Ayus lng ako dto Ano meron paba.(Nakangiting sinabi).\n");
        str.append("At nag simula na silang lumakad papuntang gilid ng ilog ng Sizkharr..\n");
        str.append("Rodolfo : mga kasama dito muna tayo mag palipas ng gabi.\n");
        str.append("Crikkkk.. Crikkk.. Crikk..(tunog ng insecto).\n");
        str.append("Camille : Sana Ayus lng ang bayan ng Mirza..\n");
        str.append("Ivan : Wag kang mag alala Nandun ang kaibigan kong si Alwyn..\n");
        str.append(" Si alwyn ay isang experto pag dating sa pag gamit ng pana at sya ang unang kasamahan at kaibigan ni Ivan \n");
        str.append("Rey : huh si Alwyn... (Mahinang sinabi).\n");
        str.append("Camille : bakit parang ang lalim ng iniisip ni rey... (Nag tatakang sinabi).\n");
        str.append("Ivan : Alam mo kasi si Rey at si Alwyn ay mag kaaway dahil sa isang pang yayari na naganap sa isang mission..\n");
        str.append("Camille : anung mission? (Nagtatanong).\n");
        str.append("Ivan : kaming dalawa ni Alwyn ang magkasama sa mission na inutos ni Haring Rodolfo II. At ang mission namin ay ang ubusin ang mga mandirigma ng Bayan ng Dyth.\n");
        str.append("Alaala.....\n");
        str.append("Naghahanda si Ivan para puntahan ang kaibigang si Alwyn sa kanyang bahay\n");
        str.append("Ivan : Alwyn... Ooow Aaalwyn nasan ka...\n (Siguro nasa Gubat nanaman sya..)\n(sinabi sa isip)..\n");
        str.append("Pumunta si Ivan sa Gubat para hanapin si Alwyn...\n");
        str.append("Habang nag hahanap nakita ni Ivan si Alwyn na nag eensayo...\n");
        str.append("Ivan : oyyy Alwyn nandito kalang pala..");
        str.append("Alwyn : Ivan bat naparito ka.. Mukang sasabak nanaman tayo ahh..\n");
        str.append("Ivan : tama ka nang hinala. Ipinapatawag tayo ni Haring Rodolfo II. Para sa isang mission.\n");
        str.append("Alwyn : ahh ganun ba sige kukunin kulang ang aking mga kagamitan.\n");
        str.append("At nag simula na silang mag lakad papunta sa Kaharian ni Haring Rodolfo II...\n Nang Sila ay Makarating pumunta Sila sa harapan ni haring Rodolfo II. At Sila ay lumuhod bilang paggalang..\n");
        str.append("Alwyn : Nandito napo kami Haring Rodolfo.\n");
        str.append("Haring Rodolfo II : Ipinatawag ko kayo Para sa Isang mission..\n");
        str.append("Alwyn : Anu po ba ang mission namin haring Rodolfo.\n");
        str.append("Haring Rodolfo : Ang mission nyo ay ang Ubusin ang mga Mandirigma ng bayan ng Dyth upang hindi na Sila makapanakop ng ibang Bayan.\n");
        str.append("Ivan : Yun lng ba. Walang Problema (Nakangiting sinabi).\n");
        str.append("Alwyn : Masusunod Haring Rodolfo.\n");
        str.append("Haring Rodolfo II : oh sige makakaalis na kayo.\n");
        str.append("At Sila ay naglakbay papuntang bayan ng Dyth....\n");
        str.append("End of episode 1\n");
        str.append("Ending song : Soul to squeeze by RHCP");
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
