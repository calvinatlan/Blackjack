#include <stdexcept>
#include <string>

#include "card.hpp"

//Constructor passing explicit suit and number
Card::Card(int number, Suit suit) : _number(number), _suit(suit)
{
    if(number < 1 || number > 13)
    {
        throw std::out_of_range( "Number must be between 1 and 13" );
    }
}

//Constructor passing in value between 0 - 51
Card::Card(int val) : Card::Card((val / 4 + 1), (static_cast<Suit>(val%4))) {}

Card::Card() : _number(1), _suit(static_cast<Suit>(0)) {}

Suit Card::suit()
{
    return _suit;
}

int Card::number()
{
    return _number;
}

int Card::val52()
{
    return ((_number -1 ) * 4) + _suit; 
}

int Card::value()
{
    if(_number > 10)
        return 10;
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
