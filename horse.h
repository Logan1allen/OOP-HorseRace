#ifndef HORSE_H_INCLUDED
#define HORSE_H_INCLUDED

class horse{
    private:
        int id;
        int position;
        int trackLength;
    
    public:
        Horse();
        void init(int id, int trackLength);
        void advance();
        printLane();
        bool isWinner();
}
#endif