#include <iostream>
#include <iostream>

bool playAgain(const std::string playAgainYN) {
    bool playAgainBoolean = false;
    if (playAgainYN == "Y" or playAgainYN == "Yes" or playAgainYN == "y" or playAgainYN == "yes") {
        playAgainBoolean = true;
    } else if(playAgainYN == "N" or playAgainYN == "No" or playAgainYN == "n" or playAgainYN == "no") {
        playAgainBoolean = false;
        std::cout << "You chose not to play again. See you soon :)";
    } else {
        std::string playAgainError;
        std::cout << R"(You Entered an invalid Value. Please try again. Valid Values are: "Y", "N", "Yes" and "No" Please try again: )";
        std::cin >> playAgainError;
        playAgain(playAgainError);
    }
    return playAgainBoolean;
}