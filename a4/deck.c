#include <stdio.h>
#include <stdlib.h>

#include "a4.h"

#define PRINT_DEBUG 1

// Put your deck functions in here

Deck* createDeck() {
  //Allocate space on the heap
  Deck* newDeck = (Deck*)malloc(sizeof(Deck));
  //Initialize
  newDeck->topCard = -1;
  //Return pointer to new deck
  return newDeck
}


