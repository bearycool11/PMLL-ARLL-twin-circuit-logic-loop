#ifndef EFLL_H
#define EFLL_H

#include <stdbool.h>

// Function to initialize the Ethical Flagging Logic Loop (EFLL)
void initEFLL();

// Function to evaluate if the incoming input has ethical concerns (e.g., scams, clickbait, etc.)
bool evaluateEthicalImpact(char* newInput);

// Function to check if the content violates ethical standards
void flagUnethicalContent(char* newInput);

// Function to trigger the EFLL evaluation before processing data
void efllFlagging(char* newInput);

#endif // EFLL_H
