#include <iostream>
#include <ctime>
#include <cmath>


int main(){

    double num = 0; // declaring num a double for the first do-while input check
    int numrand;
    bool validNum;
    int guess;
    int tries = 0;
    int numtries;
    std::string play;

    srand(time(NULL));
    
    std::cout << "\n********* Welcome to my Harry Potter Number Guessing Game! *********\n";
    std::cout << "              Get ready to test your magical powers! 🧙✨🔮\n\n";

    do{
        do {
            std::cout << "\nEnter the highest number for your magical range (bigger than 0): ";
            std::cin >> num;

            if (std::cin.fail() || num <= 0 || std::floor(num) != num) {
                std::cout << "Invalid input! Please enter a positive integer greater than 0.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                break;
            }
        } while (true);


        numrand = static_cast<int>((rand() % static_cast<int>(num)) + 1); // changing the num datatype to int
        numtries = std::ceil(num * 0.2);

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
                    if(tries <= numtries){
                        std::cout << "Wow, you might have the true magical powers! 🧙✨ You cast the right spell in " << tries << " tries...\n\n";

                    }
                    else{
                        std::cout << "But... Not very psychic of you. You cast the right spell in " << tries << " tries... Witchery might not be your strength.\n\n";
                    }
                std::cout << "Do you want to play again? (yes/no): \n";
                std::cin >> play;
                tries = 0;
                break;
                }
        }

        while(guess != numrand);
    }
    while(play == "yes");

    return 0;
}