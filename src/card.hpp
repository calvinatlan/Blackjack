#ifndef CARD_H
#define CARD_H

#include <string>

enum Suit
{
    DIAMONDS,
    HEARTS,
    SPADES,
    CLUBS
};

class Card
{
    public:
        Card(int number, Suit suit);
        Suit suit();
        int number();
        static std::string suitToString(Suit s); 
    private:
        const Suit _suit;
        const int _number;
};

#endif
