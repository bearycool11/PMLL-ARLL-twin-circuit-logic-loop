#ifndef PMLL_ARLL_H
#define PMLL_ARLL_H

#include <stdbool.h>

// Function to initialize the PMLL-ARLL system
void initPMLL_ARLL();

// Main loop that continuously processes input and runs both PMLL and ARLL
void runPMLL_ARLL();

// Function to validate the truth of new input data (truth-checking function)
bool validateTruth(char* newInput);

// Function to store data in memory (based on truth validation)
void storeInMemory(char* newInput, bool isTrue);

// Function to trigger ARLL learning cycle for new data or topics
void triggerARLL(char* newInput);

// Function to update the cascade gradient based on new input or feedback
void updateCascadeGradient(char* newInput);

#endif
