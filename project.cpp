#include <iostream>
#include <cstdlib>//rand() နဲ့ srand() ဆိုတဲ့ ရန်ဒမ် (ကျပန်း) ဂဏန်းထုတ်ပေးတဲ့ function တွေကို သုံးဖို့အတွက် ခေါ်ထားတာ ဖြစ်ပါတယ်။
#include <ctime> 
/*ကွန်ပျူတာရဲ့ စနစ်အချိန် (System Time) ကို လှမ်းပြီး ရယူပေးနိုင်တဲ့ Library ဖြစ်ပါတယ်။ သူ့ထဲမှာ ပါတဲ့ time(0) ဆိုတဲ့ function ကို အဓိက သုံးပါတယ်။

time(0): ကွန်ပျူတာရဲ့ လက်ရှိအချိန် (စက္ကန့်အလိုက် ပြောင်းလဲနေတဲ့ တန်ဖိုး) ကို ထုတ်ပေးတာ ဖြစ်ပါတယ်။*/

using namespace std;

// --- ANSI Color Codes ---( to make the outputs colourful )
#define RESET   "\033[0m"       // the numbers are to make the computer understand what colour we want to change
#define RED     "\033[31m"      // For Danger/Spider
#define GREEN   "\033[32m"      // For Victory/Health
#define YELLOW  "\033[33m"      // For Items/Gold
#define BLUE    "\033[34m"      // For Map/Info
#define MAGENTA "\033[35m"      // For Title ( ပန်းခရမ်းရောင် )
#define CYAN    "\033[36m"      // For Locations
// The cout<<R"()"; is  used to output the exact thing that has been typed into the it.

void drawLine() {
    cout << CYAN << "=========================================================" << RESET << endl;
}

void showTitleArt() {
    cout << MAGENTA;
    cout<<R"(
 __________.__            .___                     
 \______   \__| ____    __| _/____  ___.__._____   
  |     ___/  |/    \  / __ |\__  \<   |  |\__  \  
  |    |   |  |   |  \/ /_/ | / __ \\___  | / __ \_
  |____|   |__|___|  /\____ |(____  / ____|(____  /
                   \/      \/     \/\/          \/ 
    
    
    )"<<endl;
    cout << RESET;
    drawLine();
    cout << YELLOW << "            PINDAYA QUEST: LEGEND OF PRINCE KUMBHAYA          " << RESET << endl;
    drawLine(); // Pindaya quest = ပင်းတယ စွန့်စားခန်း
}

void showSpiderArt() {
    cout << RED;
    cout<<R"(
     / _ \      
   \_\(_)/_/     
    _//o\\_
     /   \
     

======================================== ENCOUNTERED =============================================!!
!!                                                                                                !!
!!                                                                                                !!                                                                                               !!
!!                                                                                                !!
!!                                       -*-_*******_-*-                                          !!            
!!                                      (/* ( ##) () * \)                                         !!
!!                        "_          //( *** ## ** *** )\\          _"                           !!
!!                 '_     /( \__     //(# ' _/####\_   '#)\\    __  / )\    _'                    !!
!!             '_  / \  ((  \\  \   ((###   ########    ###))  /   // ))  // \                    !!
!!            _//\/ /\\//\\  \\  \  \#### /#########\  ####/  /   // //__// \ \  __'              !!
!!           /// / /  \\__\\  \\  \  \## //---------\\  ##/  /   // //  //  /\ \/ \\              !!
!!          //  / / _//\\  \\  \\  \  \_/ ( *@,,,,,*@ )\_/  /   // //  //  // \ \  \\             !!
!!       __//  / /_/ /\ \\  \\  \\  ._.((( ( @. .@ )  ))) ._.  // //  //  //\  \ \  \\__          !!
!!        //  / / /_/  \ \\  \\  \\ \ *.( ( *** ***  ) ).* /  // //  //  //  \_ \ \  \\           !!
!!       //  / / /      \ \\  \\  \\_) )'_( //( )()( )\\)'_((// //  //  //     | \ \  \\          !!
!!      / ) ( /||        \_\\  \\  \--*'/ \(((|//\\|)))/ *--'  //  //  //      || \ ) ( \         !!
!!   __//  / / ||          ,\\__\\__/' ()/.\(,(/""\),)/.\() \ //__//__//,      ||  \ \  \\__      !!
!!    //  / /  ||                      (_)   \#(    )#/   (_)                  ||   \ \  \\       !!
!!   //  / /   ./_                     ',)_   \'.  .'/   _(,'                 _\.    \ \  \\      !!
!!  //  / /   //                        \)\               /(/                   \\    \ \  \\     !!
!!  \\  \ \,                             ''                ''                        ,/ /  //     !!
!!  //  / /                                                                           \ \  \\     !!
!! /   / /                                                                             \.\  \     !!
!!      /                                                                             ''\''       !!
!!                                                                                                !!
!!                                                                                                !!
!!                                                                                                !!
!!                               +----------------------------+                                   !!
!!                               |     GIANT SPIDER BOSS      |                                   !!
!!_______________________________|____________________________|___________________________________!!


               )"<<endl;     
    cout<<"  *** GIANT SPIDER BOSS *** " << RESET << endl;
}


int main() {
    srand(time(0));// for generating different numbers in rand. it uses the actual time of the computer for example if u run it at 8 am this morning =၁၉၇၀ ကနေ ဒီနေ့မနက် ၈ နာရီအထိ ကုန်လွန်ခဲ့တဲ့ စက္ကန့်စုစုပေါင်း
    int spiderHP = 250;
    int playerHP = 100;
    int choice;
    bool hasGoldenArrow = false;
    bool hasPotion = false;
    string currentLocation = "Pone Taloke Lake";

    showTitleArt();
    cout << "\nSeven nymphs are trapped inside the Pindaya Cave!" << endl;
    cout << "Prince Kumbhaya, it is time to save them!" << endl;
    cout << "Notice that you need to collect the potion and the arrow to defeat the Giant Spider!"<<endl;

    while (playerHP > 0 && spiderHP > 0) 
    {
        cout << "\n" << BLUE << "[ STATUS ]" << RESET << " Location: " << CYAN << currentLocation << RESET 
             << " | HP: " << GREEN << playerHP << RESET << endl;
        
        cout << "+--------------------------+" << endl;
        cout << "| 1. Move Forward          |" << endl;
        cout << "| 2. Search Area           |" << endl;
        cout << "| 3. View Map              |" << endl;
        cout << "+--------------------------+" << endl;
        cout << "Select Action: ";
        cin >> choice;

        if (choice == 1) 
        {
            if (currentLocation == "Pone Taloke Lake") 
            {
                cout << "\n>> Entering the " << RED << "Deep Forest..." << RESET << endl;
                currentLocation = "Deep Forest";
            } 
            else if (currentLocation == "Deep Forest") 
            {
                cout << "\n>> You reached the " << RED << "Cave Entrance!" << RESET << endl;
                currentLocation = "Cave Entrance";
                showSpiderArt();
                
                cout << YELLOW << "Battle the Giant Spider? (1: Yes / 2: No): " << RESET;
                int bChoice; 
                cin >> bChoice;
                
                if (bChoice == 1) 
                {
                    while (spiderHP > 0 && playerHP > 0) 
                    {
                        int dmg = (hasGoldenArrow) ? 70 : 30;
                        cout << GREEN << "\n[ATTACK] " << RESET << "You deal " << dmg << " damage!" << endl;
                        spiderHP -= dmg;
                        
                        if (spiderHP > 0) 
                        {
                            int sDmg = rand() % 30+ 10;
                            cout << RED << "[DANGER] " << RESET << "Spider hits you for " << sDmg << " damage!" << endl;
                            playerHP -= sDmg;
                        }
                        if (hasPotion && playerHP < 30) 
                        {
                            cout << YELLOW << "[AUTO] Using Potion! +50 HP" << RESET << endl;
                            playerHP += 50; hasPotion = false;
                        }
                    }
                } 
                else 
                { 
                    currentLocation = "Deep Forest"; 
                }
            }
        } 
        else if (choice == 2) 
        {
            if (rand() % 2 == 0) 
            {
                
                if (currentLocation == "Deep Forest") 
                {
                    cout << YELLOW << "\n[FOUND] You found golden arrow! " << RESET << endl;
                    hasGoldenArrow = true;
                }
                
                else 
                {
                     cout << YELLOW << "\n[FOUND] You found Healing potion! " << RESET << endl;
                     hasPotion = true;
                }
                
            }
            else
            {
                cout << "\nNothing found here..." << endl;
            }
        } 
        else if (choice == 3) 
        {
            cout << BLUE << "\nMAP: Lake <---> Forest <---> Cave" << RESET << endl;
        }

        else 
        {
            cout<<"Invalid choice! Try again !"<<endl;
        }

    }

    drawLine();
    if (playerHP > 0) 
    {
        cout << GREEN << "VICTORY! The nymphs are safe. PINDAYA!" << RESET << endl;
    } 
    else 
    {
        cout << RED << "GAME OVER. The legend ends here..." << RESET << endl;
    }
    drawLine();

    return 0;
}