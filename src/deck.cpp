#include <iostream>
#include <stack>
#include <algorithm>

#include <time.h>

#include "deck.hpp"

Deck::Deck()
{
    for(int i = 0; i < 52; i++)
    {
        Card* c = new Card(i);
        cardStack.push(c);
    }
}

void Deck::shuffle()
{
    int s = cardStack.size();
    int *shufflePool = new int[s];
    std::srand (time(NULL));

    for(int i = 0; i < s; i++)
    {
        shufflePool[i] = cardStack.top()->val52();
        delete cardStack.top();
        cardStack.pop();
    }

  for(int i = 0; i < s; i++)
    {
        int r = rand() % (i + 1);
        int temp = shufflePool[i];
        shufflePool[i] = shufflePool[r];
        shufflePool[r] = temp;
    }

    for(int i = 0; i < s; i++)
    {
        Card* c = new Card(shufflePool[i]);
        cardStack.push(c);
        std::cout << c->number() << " of " << Card::suitToString(c->suit()) << std::endl;
        //std::cout << cardStack.top()->val52() << std::endl;
    }

    delete [] shufflePool;

}

