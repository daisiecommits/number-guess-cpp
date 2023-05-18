    std::cout << "\nEnter the highest number for your magical range (bigger than 0): ";

            std::string input;
            std::cin >> input;

            // Check if the input is a valid integer
            try {
                num = std::stoi(input);
                if (num > 0) {
                    validNum = true;
                } else {
                    std::cout << "Please enter a positive integer number bigger than 0.\n";
                }
            } catch (...) {
                std::cout << "Please enter a valid integer.\n";
            }

            // Clear any remaining input from the buffer
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');