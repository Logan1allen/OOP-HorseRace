#ifndef HORSE_H
#define HORSE_H

class Horse{
    private:
        int ID;
        int position;
        int trackLength;
    
    public:
        Horse();
        void init(int id, int trackLength);
        void advance();
        void printLane() const;
        bool isWinner() const;
        int getPosition() const;
};
#endif