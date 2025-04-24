📘 Read Me: Coin Distribution Program
🔍 Purpose:
This program allows the user to select a currency (US Dollar, Australian Dollar, or Euro), enter an amount (between 1 and 95), and calculates how many coins of each denomination are needed to make that amount.

🧑‍💻 How It Works:
Currency Selection
The user chooses one of the three currencies:

US$

AU$

Euro

Enter Amount

The user is asked to enter a value between 1 and 95.

If the selected currency is AU$, the amount must be a multiple of 5.

If an invalid amount is entered, the user will be asked again.

Calculate Coin Distribution

The program uses fixed coin denominations based on the selected currency:

US$: 50, 25, 10, 1 cents

AU$: 50, 20, 10, 5 cents

Euro: 20, 10, 5, 1 cents

It calculates how many of each coin is needed to make the entered amount using a greedy algorithm (starting from the largest coin).

Display Results

The program shows the number of coins for each denomination used.

Repeat or Exit

The user is asked: “Do you want to continue? (y/n):”

If the user enters 'y', the program starts again.

If the user enters 'n', the program ends.

⚙️ Functions Used:
SelectCurrency() – Lets the user choose a currency.

GetAmountInput(currencyChoice) – Asks and validates the amount based on currency.

SetCurrencyDenominations(currencyChoice, denominations) – Sets coin values for the selected currency.

CalculateCoins(amountInput, denominations, coinCount, size) – Calculates number of coins for each denomination.

DisplayCoinResults(coinCount, denominations, size) – Shows the coin breakdown.

CheckContinueOrExit() – Asks the user if they want to run the program again.

📌 Notes:
The program only accepts inputs between 1 and 95.

For AU$, only multiples of 5 are accepted (e.g., 5, 10, 15…).

The logic ensures user-friendly interaction with input checks and meaningful error messages.
