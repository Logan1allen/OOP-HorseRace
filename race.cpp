#include "race.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Race::Race() {
    for (int i = 0; i < numHorses; i++) {
        horses[i].init(i, trackLength);
    }
}

void Race::printTrack() const {
    for (int i = 0; i < numHorses; i++) {
        horses[i].printLane();
    }
}

void Race::runRace() {
    srand(time(0));
    bool keepGoing = false;
    int winner = -1;

    while (!keepGoing) {
        printTrack();
        std::cout << "Press enter for another turn:";
        std::cin.get();

        for (int i = 0; i < numHorses; i++) {
            horses[i].advance();
            if (horses[i].isWinner()) {
                keepGoing = true;
                winner = i;
            }
        }
    }

    printTrack();
    std::cout << "Horse " << winner << " is the winner!" << std::endl;
}