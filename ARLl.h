#ifndef ARLL_H
#define ARLL_H

#include <stdbool.h>

// Function to initialize the ARLL system
void initARLLSystem();

// Function to trigger ARLL process based on new or novel input
void triggerARLL(char* newInput);

// Function to check if new data is a new topic (novelty detection)
bool isNewTopic(char* newInput);

// Function to adjust learning parameters (e.g., learning rate, weights) based on new data
void adjustLearningParameters(char* newInput);

// Function to update the learning model with new data
void updateLearningModel(char* newInput);

#endif
