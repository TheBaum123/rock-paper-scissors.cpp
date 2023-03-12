#include <iostream>
#include "userAndComputerInput.h"
#include "winDetection.h"
#include "playAgain.h"
#include "log.h"

using namespace std;

int main() {
    int userInputNum;
    int computerInputNum;
    string userInputText;
    int winner;
    string computerInputTxt;
    string winnerOutput;
    string output;
    string playAgainYN;
    bool playAgainBool;

    cout << "Please enter Rock, Paper or Scissors: ";
    cin >> userInputText;

    userInputNum = userInput(userInputText);
    computerInputNum = computerInput();
    winner = winDetection(userInputNum, computerInputNum);
    computerInputTxt = computerInputText(computerInputNum);
    winnerOutput = winnerText(winner);


    if (userInputNum == 0) {
        cout << "Just... try entering everything correctly the next time. You didnt do so this time so the program will close.";
        return 0;
    }


    output = "\nUser Input: " + userInputText + "\nComputer Input: " + computerInputTxt + "\n" + winnerOutput + "\n";


    cout << output;
    log(output, userInputText, userInputNum, computerInputNum, computerInputTxt);

    cout << "Do You want to play again? (Y/N) ";
    cin >> playAgainYN;

     playAgainBool = playAgain(playAgainYN);

    if (playAgainBool) {
        cout << endl << endl << "You chose to play again," << endl;
        main();
    } else {
        return 0;
    }
}