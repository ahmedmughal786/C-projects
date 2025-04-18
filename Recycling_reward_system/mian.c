#include <stdio.h>
#include <string.h>

#define MAX_CHILDREN 100

// Structs
typedef struct {
    char name[50];
    int plasticBottles;
    int glassBottles;
} Collection;

typedef struct {
    char name[50];
    int totalPlastic;
    int totalGlass;
    float totalAmount;
} Payment;

// Function Declarations
int readFile(const char *filename, Collection collections[]);
void addOrUpdatePayment(const Collection *collection, Payment payments[], int *paymentCount);
int findChildIndex(const char *name, Payment payments[], int paymentCount);
void writeFile(const char *filename, Payment payments[], int paymentCount);
void displayChildData(const char *name, Payment payments[], int paymentCount);

// Main Function
int main() {
    Collection collections[MAX_CHILDREN];
    Payment payments[MAX_CHILDREN];
    int collectionCount = 0, paymentCount = 0;
    char childName[50];
    int choice;

    // Read data from file
    collectionCount = readFile("coins.txt", collections);
    for (int i = 0; i < collectionCount; i++) {
        addOrUpdatePayment(&collections[i], payments, &paymentCount);
    }

    // Menu Loop
    do {
        printf("\n=== Prince Gilagila Primary School Recycling Program ===\n");
        printf("1. Enter Child Name\n");
        printf("2. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter the child's name: ");
                scanf("%s", childName);
                displayChildData(childName, payments, paymentCount);
                break;

            case 2:
                printf("\nExiting and saving data to payments.csv...\n");
                writeFile("payments.csv", payments, paymentCount);
                printf("Data saved. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 2);

    return 0;
}

// Function to read data from file
int readFile(const char *filename, Collection collections[]) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error: Could not open file %s\n", filename);
        return 0;
    }

    int count = 0;
    while (fscanf(file, "%s %d %d", collections[count].name, &collections[count].plasticBottles, &collections[count].glassBottles) != EOF) {
        count++;
    }
    fclose(file);
    return count;
}

// Function to update payment data
void addOrUpdatePayment(const Collection *collection, Payment payments[], int *paymentCount) {
    int index = findChildIndex(collection->name, payments, *paymentCount);
    if (index == -1) {
        strcpy(payments[*paymentCount].name, (*collection).name);
        payments[*paymentCount].totalPlastic = collection->plasticBottles;
        payments[*paymentCount].totalGlass = collection->glassBottles;
        payments[*paymentCount].totalAmount = collection->plasticBottles * 0.05 + collection->glassBottles * 0.10;
        (*paymentCount)++;
    } else {
        payments[index].totalPlastic += collection->plasticBottles;
        payments[index].totalGlass += collection->glassBottles;
        payments[index].totalAmount += collection->plasticBottles * 0.05 + collection->glassBottles * 0.10;
    }
}

// Function to find child index in payments array
int findChildIndex(const char *name, Payment payments[], int paymentCount) {
    for (int i = 0; i < paymentCount; i++) {
        if (strcmp(payments[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

// Function to write data to CSV file
void writeFile(const char *filename, Payment payments[], int paymentCount) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        printf("Error: Could not open file %s\n", filename);
        return;
    }

    for (int i = 0; i < paymentCount; i++) {
        fprintf(file, "%s,%d,%d,%.2f\n", payments[i].name, payments[i].totalPlastic, payments[i].totalGlass, payments[i].totalAmount);
    }
    fclose(file);
}

// Function to display child data
void displayChildData(const char *name, Payment payments[], int paymentCount) {
    int index = findChildIndex(name, payments, paymentCount);
    if (index == -1) {
        printf("\nNo data found for child: %s\n", name);
    } else {
        printf("\nChild Name: %s\n", payments[index].name);
        printf("Total Plastic Bottles: %d\n", payments[index].totalPlastic);
        printf("Total Glass Bottles: %d\n", payments[index].totalGlass);
        printf("Total Amount: $%.2f\n", payments[index].totalAmount);
    }
}
