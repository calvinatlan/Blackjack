#ifndef DECK_H
#define DECK_H

#include <stack>

#include "card.hpp"

class Deck 
{
    public:
        Deck();
        Card draw();
        bool isEmpty();
        int cardsLeft();
        void shuffle();
    private:
        std::stack<Card> cardStack;
};
#endif
