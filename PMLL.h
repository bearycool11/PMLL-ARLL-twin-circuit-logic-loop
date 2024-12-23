#ifndef PMLL_H
#define PMLL_H

#include <stdbool.h>

// Function to initialize the memory system
void initMemorySystem();

// Function to store data in memory (truth-validated)
void storeInMemory(char* newInput, bool isTrue);

// Function to validate the truth of new input data
bool validateTruth(char* newInput);

// Function to print memory contents (for debugging and verification)
void printMemory();

#endif
