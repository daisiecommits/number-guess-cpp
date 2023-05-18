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

    do{
        if(guess > numrand){
            std::cout << "Too HIGH! Your guess soared higher than The Golden Snitch! ʚ🟡ɞ\n";
        }
        else if(guess < numrand){
            std::cout << "Too LOW! Your guess sank lower than merpoeple in The Black Lake! 🧜‍\n";
        }
        else{
            std::cout << "You got it! 🎉 Guessus correctus!\n";
        }

    }
    while(guess != numrand);

    return 0;
}