#ifndef RACE_H_INCLUDED
#define RACE_H_INCLUDED

#include "horse.h"

class Race{
    private:
        static const int numHorses = 5;
        const static int trackLength = 15;
        Horse horses[numHorses];

    public:
        Race();
        void printTrack() const;
        void runRace();

};
#endif