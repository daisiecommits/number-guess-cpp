#include <iostream>
#include <ctime>


int main(){

    int num;
    int numrand;
    int guess;
    int tries = 0;

    srand(time(NULL));
    
    std::cout << "\nWelcome to my Harry Potter Number Guessing Game!\n";
    std::cout << "Get ready to test your magical powers! 🧙✨🔮\n";

    std::cout << "Enter the highest number for your magical range bigger than 1: ";
    std::cin >> num;

    numrand = (rand() % num) + 1;

    std::cout << "\nCast your guess: ";
    std::cin >> guess;
    tries++;


    return 0;
}