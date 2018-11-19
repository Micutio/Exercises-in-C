#include <stdio.h>

int main(int argc, char* argv[]) {
    int nmbrs[4] = {5}; // Create 4-long array of zeroes
    // char name[4] = {'a', 'a', 'a', 'a'};
    char* name = "aaa\0";

    // First, print out raw.
    printf("numbers: %d %d %d %d\n", nmbrs[0], nmbrs[1], nmbrs[2], nmbrs[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);

    // Set up the numbers.
    nmbrs[0] = 1;
    nmbrs[1] = 2;
    nmbrs[2] = 3;
    nmbrs[3] = 4;

    // Set up the name.
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = '\0';

    // Print out initialized.
    printf("numbers: %d %d %d %d\n", nmbrs[0], nmbrs[1], nmbrs[2], nmbrs[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);

    // Another way the use name:
    char* another = "Zed";
    printf("another: %s\n", another);
    printf("another each: %c %c %c %c\n", another[0],another[1], another[2], another[3]);

    return 0;
}