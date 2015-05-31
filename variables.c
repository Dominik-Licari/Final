#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;//Standard integer
    float power = 2.345f;//Decimal number
    double super_power = 56789.4532;//A more precise float
    char initial = 'A';//Standard char
    char first_name[] = "Zed";//stings are char arrays in C
    char last_name[] = "Shaw";

    printf("You are %d miles away.\n", distance); //formatted printf
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

    return 0;
}
