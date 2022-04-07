#include <stdio.h>
 
struct person
{
    int age;
    char * name;
    int tue;
};
 
int main(void)
{
    struct person tom = {20, "Tom"};
    printf("Age: %d \t Name: %s", tom.age, tom.name);
    return 0;
}

