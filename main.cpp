#include <iostream>
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
    string message = "The 4 Adventurers Created by Mollejon The Writer of Group

Group name : Gamers Chain 

Opening song : Can't stop by RHCP

Year 1117 may apat na manlalakbay na nag mula sa lugar na tinatawag na The 
Skull. At Sila ay sina Camille the sorceress, Rodolfo III the Paladin, Rey the Assassin, at si Ivan the Explosive Expert. Isang Araw habang Sila ay nag papahinga. Sila ay naka tanggap ng minsahe o sulat na galing sa ibang lugar at ito ay binasa ni Camille at ang sabi sa sulat ay. Tulungan nyo kame sinasalakay kami ng grupo ng mga Pirata... At ang mensahing iyon ay galing sa lugar ng Mirza...matapos na mabasa ito ni Camille ay agad silang nag handa para sa pag lalakbay.............. 
Makalipas ang isang oras na paglalakad may na pansin c Rey na parang may naka sunod sa kanila.. 

Rey : mga kasama may nararamdaman akong nakasunod humanda kayo.. 

Ivan : mukang may sasabog nanaman ngayung Araw nato.. (Naka ngiting sinabi). 

Habang sa patuloy na pag lalakad isang bala ng pana ang dumaan sa harap ni rodolfo. At ito tumusok sa kalapit na puno... 

Rodolfo : Wooow muntik na ko dun Ahh... (Pabirong sinabi). 

Rodolfo : mga Kasama humanda sa pag sugod.. (Habang naka taas ang kamay). 

At nag simula ang Laban sa pagitan ng 4 na manlalakbay at ang mga Kawatan o Mag nanakaw... 

Makalipas ang kalahating oras na labanan nag wagi ang 4 na manlalakbay Laban sa mga mag nanakaw.. 

Camille : Mga kasama meron bang na saktan... 

Rodolfo : Ayus lng kami. 

Rey : Ayus lng ehh ikaw jan Ivan.. 

Ivan : Ayus lng ako dto Ano meron paba.(Nakangiting sinabi). 

At nag simula na silang lumakad papuntang gilid ng ilog ng Sizkharr.. 

Rodolfo : mga kasama dito muna tayo mag palipas ng gabi. 

Crikkkk.. Crikkk.. Crikk..(tunog ng insecto). 

Camille : Sana Ayus lng ang bayan ng Mirza.. 

Ivan : Wag kang mag alala Nandun ang kaibigan kong si Alwyn.. 

" Si alwyn ay isang experto pag dating sa pag gamit ng pana at sya ang unang kasamahan at kaibigan ni Ivan ". 

Rey : huh si Alwyn... (Mahinang sinabi). 

Camille : bakit parang ang lalim ng iniisip ni rey... (Nag tatakang sinabi). 

Ivan : Alam mo kasi si Rey at si Alwyn ay mag kaaway dahil sa isang pang yayari na naganap sa isang mission.. 
 
Camille : anung mission? (Nagtatanong). 

Ivan : kaming dalawa ni Alwyn ang magkasama sa mission na inutos ni Haring Rodolfo II. At ang mission namin ay ang ubusin ang mga mandirigma ng Bayan ng Dyth. 

Alaala..... 

Naghahanda si Ivan para puntahan ang kaibigang si Alwyn sa kanyang bahay. 

Ivan : Alwyn... Ooow Aaalwyn nasan ka... 
(Siguro nasa Gubat nanaman sya..)(sinabi sa isip).. 

Pumunta si Ivan sa Gubat para hanapin si Alwyn... 

Habang nag hahanap nakita ni Ivan si Alwyn na nag eensayo... 

Ivan : oyyy Alwyn nandito kalang pala.. 

Alwyn : Ivan bat naparito ka.. Mukang sasabak nanaman tayo ahh.. 

Ivan : tama ka nang hinala. Ipinapatawag tayo ni Haring Rodolfo II. Para sa isang mission. 

Alwyn : ahh ganun ba sige kukunin kulang ang aking mga kagamitan. 

At nag simula na silang mag lakad papunta sa Kaharian ni Haring Rodolfo II... Nang Sila ay Makarating pumunta Sila sa harapan ni haring Rodolfo II. At Sila ay lumuhod bilang paggalang.. 

Alwyn : Nandito napo kami Haring Rodolfo. 

Haring Rodolfo II : Ipinatawag ko kayo Para sa Isang mission.. 

Alwyn : Anu po ba ang mission namin haring Rodolfo. 

Haring Rodolfo : Ang mission nyo ay ang Ubusin ang mga Mandirigma ng bayan ng Dyth upang hindi na Sila makapanakop ng ibang Bayan. 

Ivan : Yun lng ba. Walang Problema (Nakangiting sinabi). 

Alwyn : Masusunod Haring Rodolfo. 

Haring Rodolfo II : oh sige makakaalis na kayo. 

At Sila ay naglakbay papuntang bayan ng Dyth.... 

End of episode 1 

Ending song : Soul to squeeze by RHCP\n";
    slow_print(message, 100);

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
