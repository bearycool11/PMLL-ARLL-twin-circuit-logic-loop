#include "pml.h"
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

// Define maximum memory size (can be adjusted based on needs)
#define MAX_MEMORY_SIZE 1000

// Memory structure to store validated data
char memory[MAX_MEMORY_SIZE][256];  // Array to store strings
int memoryIndex = 0;  // Pointer to the next available memory slot

// Function to initialize the memory system
void initMemorySystem() {
    // Initialize memory to be empty
    memset(memory, 0, sizeof(memory));
    memoryIndex = 0;
    printf("Memory system initialized.\n");
}

// Function to store data in memory after truth validation
void storeInMemory(char* newInput, bool isTrue) {
    if (isTrue) {
        // If the data is true, store it in memory
        if (memoryIndex < MAX_MEMORY_SIZE) {
            strncpy(memory[memoryIndex], newInput, sizeof(memory[memoryIndex]) - 1);
            memoryIndex++;
            printf("Stored in memory: %s\n", newInput);
        } else {
            printf("Memory full, cannot store more data.\n");
        }
    } else {
        // If the data is false, flag it
        printf("False data detected, not storing: %s\n", newInput);
    }
}

// Function to check the truth of the new input (can be expanded with advanced checks)
bool validateTruth(char* newInput) {
    // Simple truth-checking logic (this can be enhanced with more sophisticated checks)
    // Here we assume any input starting with "true" is valid
    if (strncmp(newInput, "true", 4) == 0) {
        return true;
    }
    return false;
}

// Function to print all stored memory for review (for debugging purposes)
void printMemory() {
    printf("Memory content:\n");
    for (int i = 0; i < memoryIndex; i++) {
        printf("%d: %s\n", i + 1, memory[i]);
    }
}
