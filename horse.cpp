#include "horse.h"
#include <cstdlib>
#include <iostream>

horse::horse() {
    ID = 0;
    trackLength = 0;
    position = 0;
}

void horse::init(int id, int length) {
    ID = id;
    trackLength = length;
    position = 0;
}

void horse::advance() {
    if (rand() % 2 == 1) {
        position++;
    }
}

void horse::printLane() const {
    for (int i = 0; i < trackLength; i++) {
        if (i == position) {
            std::cout << ID;
        } else {
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}

bool horse::isWinner() const {
    return position >= trackLength;
}

int horse::getPosition() const {
    return position;
}