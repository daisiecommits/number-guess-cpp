#include <iostream>
#include <ctime>


int main(){

    int num = 0;
    int numrand;
    int guess;
    int tries = 0;
    int numtries = numrand * 0.2;

    srand(time(NULL));
    
    std::cout << "\n********* Welcome to my Harry Potter Number Guessing Game! *********\n";
    std::cout << "              Get ready to test your magical powers! 🧙✨🔮\n\n";

    do{
        std::cout << "\nEnter the highest number for your magical range (bigger than 0): ";
        std::cin >> num;

        if(num <= 0){
            std::cout << "Please enter only a positive number bigger than 0.";
        }
    }
    while(num <= 0);

    numrand = (rand() % num) + 1;


    do{
        std::cout << "\nCast your guess: ";
        std::cin >> guess;
        tries++;

        if(guess > numrand){
            std::cout << "Too HIGH! Your guess soared higher than The Golden Snitch! ʚ🟡ɞ\n";
        }
        else if(guess < numrand){
            std::cout << "Too LOW! Your guess sank lower than merpoeple in The Black Lake! 🧜‍\n";

        }
        else{
            std::cout << "\n\nYou got it! 🎉 Guessus correctus!\n";
                if(guess > numtries){
                    std::cout << "But... Not very psychic of you. You cast the right spell in " << tries << " tries... Witchery might not be your strength.";
                }
                else{
                    std::cout << "Wow, you might have the true magical powers! 🧙✨ You cast the right spell in " << tries << " tries...";
                }
            }
        }

    while(guess != numrand);

    return 0;
}