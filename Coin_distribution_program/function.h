#ifndef FUNCTION_H
#define FUNCTION_H

// Function declarations
int SelectCurrency();
int GetAmountInput(int currencyChoice);
void SetCurrencyDenominations(int currencyChoice, int denominations[]);
void CalculateCoins(int amountInput, int denominations[], int coinCount[], int size);
void DisplayCoinResults(int coinCount[], int denominations[], int size);
int CheckContinueOrExit();

#endif
