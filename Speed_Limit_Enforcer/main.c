#include <stdio.h>

int main()
{

    const int SPEED_LIMIT = 60;
    const int WARNING_UPPER_LIMIT = SPEED_LIMIT + 5;
    const int FINE_80_UPPER_LIMIT = SPEED_LIMIT + 10;
    const int FINE_150_UPPER_LIMIT = SPEED_LIMIT + 20;
    const int FINE_500_LIMIT = SPEED_LIMIT + 21;

    const int FINE_WARNING = 0; // No fine, just a warning
    const int FINE_80 = 80;
    const int FINE_150 = 150;
    const int FINE_500 = 500;

    int speed;

    printf("Enter the speed of the vehicle (km/h): ");
    scanf("%d", &speed);

    if (speed < 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    if (speed <= SPEED_LIMIT)
    {
        printf("Not Speeding\n");
        return 0;
    }

    printf("Speeding \n");

    if (speed <= WARNING_UPPER_LIMIT)
    {
        printf("Warning\n");
    }
    else if (speed <= FINE_80_UPPER_LIMIT)
    {
        printf("Fine: $%d\n", FINE_80);
    }
    else if (speed <= FINE_150_UPPER_LIMIT)
    {
        printf("Fine: $%d\n", FINE_150);
    }
    else
    {
        printf("Fine: $%d\n", FINE_500);
    }

    return 0;
}
