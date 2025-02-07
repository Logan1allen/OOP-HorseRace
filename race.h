#ifndef RACE_H_INCLUDED
#define RACE_H_INCLUDED

#include "horse.h"

class race{
    private:
        const int numHorses;
        const static int TRACK_LENGTH;
        Horse horses[numHorses];

    public:
        Race();
        void runRace()

}
#endif