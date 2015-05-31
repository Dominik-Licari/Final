#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person { //The struct. It is a bunch of variables that share a name. Think of it like a object without methods.
    char *name;//a pointer to a regular variable, effectively an array
    int age;
    int height;
    int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)//a function to initialize the struct
{
    struct Person *who = malloc(sizeof(struct Person));//malloc allocates some of the computers ram and assigns it a pointer of a given size
    assert(who != NULL);//manual null pointer exeption
    //when asigning values to a pointer to a struct you use ->
    who->name = strdup(name);//method to copy strings so you dont have to loop through the char array
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person *who)//a function to delete the struct when we are done with it
{
    assert(who != NULL);

    free(who->name);//free unallocates manually allocated memory
    free(who);
}

void Person_print(struct Person *who)
{
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
    //make two people
    struct Person *joe = Person_create(
            "Joe Alex", 32, 64, 140);

    struct Person *frank = Person_create(
            "Frank Blank", 20, 72, 180);

    //print them out and where they are in memory
    printf("Joe is at memory location %p:\n", joe);
    Person_print(joe);

    printf("Frank is at memory location %p:\n", frank);
    Person_print(frank);

    //make everyone age 20 years and print them again
    joe->age += 20;
    joe->height -= 2;
    joe->weight += 40;
    Person_print(joe);

    frank->age += 20;
    frank->weight += 20;
    Person_print(frank);

    //destroy them both so we clean up
    Person_destroy(joe);
    Person_destroy(frank);

    return 0;
}
