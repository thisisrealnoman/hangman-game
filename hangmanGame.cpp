#include <iostream>
using namespace std;

int difficulty;

class mainMenu{
public:
    void displayMainMenu(){
        cout << " #####  MAIN MENU  #####" << endl << endl
             << " Welcome to Hangman Game" <<endl
             << "   1. Easy" <<endl
             << "   2. Medium" <<endl
             << "   3. Hard" << endl
             << " Enter the number for your chosen difficulty:";
        cin >> difficulty;
    }

};

int main(){
    mainMenu mainMenuObj;
    mainMenuObj.displayMainMenu();
}