#include <stdexcept>
#include <string>

#include "card.hpp"

Card::Card(int number, Suit suit) : _number(number), _suit(suit)
{
    if(number < 1 || number > 13)
    {
        throw std::out_of_range( "Number must be between 1 and 13" );
    }
}

Suit Card::suit()
{
    return _suit;
}

int Card::number()
{
    return _number;
}

std::string Card::suitToString(Suit s)
{
    switch(s)
    {
        case 0:
            return "DIAMONDS";
        case 1:
            return "HEARTS";
        case 2:
            return "SPADES";
        case 3:
            return "CLUBS";
        default:
            return NULL;
    }
}
