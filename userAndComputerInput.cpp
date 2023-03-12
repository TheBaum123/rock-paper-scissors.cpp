#include <iostream>
#include <ctime>

using namespace std;

int userInput(const string userInputText) {
    int userNumber = 0;

    if (userInputText == "rock" or userInputText == "Rock") {
        userNumber = 1;
    }
    if (userNumber == 0 and userInputText == "paper" or userNumber == 0 and userInputText == "Paper") {
        userNumber = 2;
    }
    if (userNumber == 0 and userInputText == "scissors" or userNumber == 0 and userInputText == "Scissors") {
        userNumber = 3;
    }

    return userNumber;
}

int computerInput() {
    int randomNumber;

    randomNumber = time(nullptr) % 3 +1;

    return randomNumber;
    //TODO: Better random number Generator
}

string computerInputText(int computerInputNum) {
    string inputText;

    if (computerInputNum == 1) {
        inputText = "Rock";
    }
    if (computerInputNum == 2) {
        inputText = "Paper";
    }
    if (computerInputNum == 3) {
        inputText = "Scissors";
    }

    return inputText;
}