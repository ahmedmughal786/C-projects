#include <stdio.h>
#include "function.h"

// Select currency function
int SelectCurrency()
{
    int currencyChoice;
    printf("Select a currency:\n1) US$\n2) AU$\n3) Euro\n");
    scanf("%d", &currencyChoice);

    while (currencyChoice < 1 || currencyChoice > 3)
    {
        printf("Invalid choice. Please select 1, 2, or 3.\n");
        scanf("%d", &currencyChoice);
    }
    return currencyChoice;
}

// Get amount input function
int GetAmountInput(int currencyChoice)
{
    int amountInput;
    printf("Enter an amount (1 to 95):\n");
    scanf("%d", &amountInput);

    if (currencyChoice == 2)
    { // AU$ must be multiples of 5
        while (amountInput < 1 || amountInput > 95 || amountInput % 5 != 0)
        {
            printf("Invalid amount. Must be a multiple of 5 within 1 to 95.\n");
            scanf("%d", &amountInput);
        }
    }
    else
    {
        while (amountInput < 1 || amountInput > 95)
        {
            printf("Invalid amount. Enter a value from 1 to 95.\n");
            scanf("%d", &amountInput);
        }
    }
    return amountInput;
}

// Set currency denominations function
void SetCurrencyDenominations(int currencyChoice, int denominations[])
{
    switch (currencyChoice)
    {
    case 1: // US$
        denominations[0] = 50;
        denominations[1] = 25;
        denominations[2] = 10;
        denominations[3] = 1;
        break;
    case 2: // AU$
        denominations[0] = 50;
        denominations[1] = 20;
        denominations[2] = 10;
        denominations[3] = 5;
        break;
    case 3: // Euro
        denominations[0] = 20;
        denominations[1] = 10;
        denominations[2] = 5;
        denominations[3] = 1;
        break;
    }
}

// Calculate coins function
void CalculateCoins(int amountInput, int denominations[], int coinCount[], int size)
{
    for (int i = 0; i < size; i++)
    {
        coinCount[i] = amountInput / denominations[i];
        amountInput = amountInput % denominations[i];
    }
}

// Display coin results function
void DisplayCoinResults(int coinCount[], int denominations[], int size)
{
    printf("Coin distribution:\n");
    for (int i = 0; i < size; i++)
    {
        if (coinCount[i] > 0)
        {
            printf("%d x %d cent coins\n", coinCount[i], denominations[i]);
        }
    }
}

// Check continue or exit function
int CheckContinueOrExit()
{
    char userResponse;
    printf("Do you want to continue? (y/n):\n");
    scanf(" %c", &userResponse);

    while (userResponse != 'y' && userResponse != 'n')
    {
        printf("Invalid response. Enter 'y' or 'n'.\n");
        scanf(" %c", &userResponse);
    }

    return (userResponse == 'y') ? 1 : 0;
}
