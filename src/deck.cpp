#include <iostream>
#include "deck.hpp"

Deck::Deck()
{
    for(int i = 0; i < 52; i++)
    {
        Card* c = new Card(i);
        cardStack.push(*c);
        std::cout << c->number() << " of " << Card::suitToString(c->suit()) << std::endl;
    }
}

