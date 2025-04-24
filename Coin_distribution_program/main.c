#include <stdio.h>
#include "function.h"

int main()
{
    int continueRunning = 1;
    int Size = 4;

    while (continueRunning)
    {
        int selectedCurrency = SelectCurrency();
        int inputAmount = GetAmountInput(selectedCurrency);

        int denominations[Size];
        SetCurrencyDenominations(selectedCurrency, denominations);

        int coinCount[Size]; // Declare coin count array
        for (int i = 0; i < Size; i++)
        {
            coinCount[i] = 0; // Initialize all elements to 0
        }

        CalculateCoins(inputAmount, denominations, coinCount, Size);

        DisplayCoinResults(coinCount, denominations, Size);

        continueRunning = CheckContinueOrExit();
    }

    return 0;
}
