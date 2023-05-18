#include <iostream>
#include <ctime>


int main(){

    int num;
    int numrand;
    int guess;
    int tries = 0;
    int numtries = numrand * 0.2;

    srand(time(NULL));
    
    std::cout << "\n********* Welcome to my Harry Potter Number Guessing Game! *********\n";
    std::cout << "              Get ready to test your magical powers! 🧙✨🔮\n\n";

    std::cout << "Enter the highest number for your magical range bigger than 1: ";
    std::cin >> num;

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
            std::cout << "You got it! 🎉 Guessus correctus!\n";
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