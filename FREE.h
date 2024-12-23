// PMLL-ARLL-EFLL-free.h

#ifndef PMLL_ARLL_EFLL_FREE_H
#define PMLL_ARLL_EFLL_FREE_H

// Define the PMLL structure
typedef struct {
  void (*init)(void);
  void (*process)(void* data);
  int (*isProcessing)(void);
  void (*reset)(void);
} PMLL;

// Define the ARLL structure
typedef struct {
  void (*init)(void);
  void (*process)(void* data);
  int (*isProcessing)(void);
  void (*reset)(void);
} ARLL;

// Define the EFLL structure
typedef struct {
  void (*init)(void);
  void (*process)(void* data);
  int (*isProcessing)(void);
  void (*reset)(void);
} EFLL;

// Function declarations
int isLooping(int condition, PMLL* pmll, ARLL* arll, EFLL* efll);
void breakLoop(const char* reason, PMLL* pmll, ARLL* arll, EFLL* efll);

#endif  // PMLL_ARLL_EFLL_FREE_H

// PMLL-ARLL-EFLL-free.h

// Define the PMLL interface
interface PMLL {
  init(): void;
  process(data: any): void;
  isProcessing(): boolean;
  reset(): void;
}

// Define the ARLL interface
interface ARLL {
  init(): void;
  process(data: any): void;
  isProcessing(): boolean;
  reset(): void;
}

// Define the EFLL interface
interface EFLL {
  init(): void;
  process(data: any): void;
  isProcessing(): boolean;
  reset(): void;
}

// Function declarations
declare function isLooping(condition: any, pmll: PMLL, arll: ARLL, efll: EFLL): boolean;
declare function breakLoop(reason?: string, pmll: PMLL, arll: ARLL, efll: EFLL): void;

// Class declarations
declare class PMLLImpl implements PMLL {
  init(): void;
  process(data: any): void;
  isProcessing(): boolean;
  reset(): void;
}

declare class ARLLImpl implements ARLL {
  init(): void;
  process(data: any): void;
  isProcessing(): boolean;
  reset(): void;
}

declare class EFLLImpl implements EFLL {
  init(): void;
  process(data: any): void;
  isProcessing(): boolean;
  reset(): void;
}
