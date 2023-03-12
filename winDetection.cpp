#include <iostream>

int winDetection(int userInputNum , int computerInputNum) {
    int winningState = 0;

    if (userInputNum == computerInputNum) {
        winningState = 1;
    }
    if (winningState == 0 and userInputNum == 1 and computerInputNum == 2) {
        winningState = 2;
    }
    if (winningState == 0 and userInputNum == 1 and computerInputNum == 3) {
        winningState = 3;
    }
    if (winningState == 0 and userInputNum == 2 and computerInputNum == 1) {
        winningState = 3;
    }
    if (winningState == 0 and userInputNum == 2 and computerInputNum == 3) {
        winningState = 2;
    }
    if (winningState == 0 and userInputNum == 3 and computerInputNum == 1) {
        winningState =2;
    }
    if (winningState == 0 and userInputNum == 3 and computerInputNum == 2) {
        winningState =3;
    }

    return winningState;
}

std::string winnerText(int winner) {
    std::string winnerTextVar;

    if(winner == 0) {
        winnerTextVar = "Error";
    }
    if (winner == 1) {
        winnerTextVar = "It's a tie";
    }
    if (winner == 2) {
        winnerTextVar = "You lost :(";
    }
    if (winner == 3) {
        winnerTextVar = "You Won :)";
    }

    return winnerTextVar;
}