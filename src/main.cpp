#include <iostream>
using namespace std;

#include "deck.hpp"

int main()
{
    Deck d = Deck::Deck();
    d.shuffle();
    return 0;
}
