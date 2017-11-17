#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter day, month and year \n ");
    int day, month, year;
    scanf("%d", &day);
    scanf("%d", &month);
    scanf("%d", &year);
    int a = (14 - month) /12;
    int y = year - a;
    int m = month + 12 * a - 2;
    day = (7000 + (day + y + y / 4 - y / 100 + y / 400 + (31 * m) /12)) % 7;
    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 0:
        printf("Sunday \n");
        break;
    }
    return 0;
}
