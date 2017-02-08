#include <iostream>
#include "deck.hpp"

Deck::Deck()
{
    for(int i = 0; i < 52; i++)
    {
        Card* c = new Card(i/4 + 1, static_cast<Suit>(i%4));
        cardStack.push(*c);
        std::cout << c->number() << " of " << Card::suitToString(c->suit()) << std::endl;
    }
}

