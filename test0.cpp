
#include <iostream>
#include <stdlib.h>
#include "colors.h"
using namespace std;

int get_num(char name[]) {
    bool changed = false;
    int num = 0;

    cout << "Hello, " << name << "! Please enter a number: ";
    cin >> num;
    if (num==5) {
        cout << "Wow! We think very alike!" << endl;
    }
    else if (num > 20) {
        cout << "Mm... Too large. You get 5." << endl;
        num = 5;
    }
    else if (num < 0) {
        cout << "Mm... I don't like negative numbers. You get 5." << endl;
        num = 5;
    }
    else if (num == 0) {
        cout << "Boring! You get 5!" << endl;
        num = 5;
    }

    return num;
}

int skeleton_time(char name[], int n) {
    int choice = 0;

    _sleep(1000);
    cout << endl << FCYN("Do you know what time it is?") << endl;
    _sleep(2500);

    cout << "\n+----------------------+" << endl << "|    " << FCYN("Skeleton Time!") << "    |" << endl << "+----------------------+" << endl;
    _sleep(1200);
    for (int i = 0; i < n; i++) {
        cout << "\nA skeleton appears!";
        _sleep(100);
    }
    if (n==1) {
        cout << "\nAnother skeleton appears! " << FDRK("(The first one needed a buddy)");
    }
    cout << endl << "\nYou must decide your fate! Choose quickly:\nFight! [1]\nFlee!  [2]\nDance? [3]\nYour choice: ";
    cin >> choice;
    cout << endl;

    switch(choice){
        case 1:
            cout << "You shatter the rattling bones with your great strength! The skeletons plague you no more..." << endl;
            return 1;
        case 2:
            cout << "You flee as though your life depends on it - indeed it does! You leave the rattling bones behind you..." << endl;
            return 1;
        case 3:
            cout << "You attempt to stun the skeletons with your seductive wiles! Their grimaces are steadfast..." << endl;
            return 2;
        default:
            cout << "An invalid choice! Your indecision costs you..." << endl;
            return 2;
    }
}

int main() {
    char name[] = "placeholder";
    int n = 5;
    int res = 0;

    cout << "Welcome to my test program! Please enter your name: ";
    cin >> name;

    n = get_num(name);
    res = skeleton_time(name, n);

    switch(res){
        case 1:
            cout << FGRN("You survived your encounter with the vicious undead!") <<  " Congratulations!\n";
            break;
        case 2:
            cout << FRED("You have been slain!") << " Your bones now march alongside the fallen, seeking lost souls to join you\n";
            break;
    }
    cout << endl << "+----------------------+" << endl << "|" << FYEL("Thank you for playing!") << "|" << endl << "+----------------------+" << endl;
    system("pause");
}