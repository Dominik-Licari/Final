#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {
        'Z', 'e', 'd',
         ' ', 'A', '.', ' ',
         'S', 'h', 'a', 'w', '\0' //that null char? it is secretly the last char of every string
    };

    printf("The size of an int: %u\n", sizeof(int));//Size of returns the sise of a type in bytes
    printf("The size of areas (int[]): %u\n", sizeof(areas));//also works on variables
    printf("The number of ints in areas: %u\n", sizeof(areas) / sizeof(int));//logicaly, you can use this to find how may of a certain type are in an array
    printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);
    printf("The size of a char: %u\n", sizeof(char));
    printf("The size of name (char[]): %u\n", sizeof(name));
    printf("The number of chars: %u\n", sizeof(name) / sizeof(char));
    printf("The size of full_name (char[]): %u\n", sizeof(full_name));
    printf("The number of chars: %u\n", sizeof(full_name) / sizeof(char));
    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}
