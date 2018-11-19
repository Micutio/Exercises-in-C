#include <stdio.h>

int main(int argc, char* argv[]) {
    
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'w', '\0'};
    // This will produce a warning and a smaller size for full_name.
    // char* full_name = "Zed A. Shaw";

    // WARNING: ON some systems you may have to change the %ld in this code
    // To a %u since it will use unsigned ints.
    printf("the size of an int: %lu\n", sizeof(int));
    printf("the size of an areas (int[]): %lu\n", sizeof(areas));
    printf("the  number of ints in areas: %lu\n", sizeof(areas)/sizeof(int));
    printf("the first area is %d, the 2nd %d\n", areas[0], areas[1]);

    printf("the size of a char: %lu\n", sizeof(char));
    printf("the size of name (char[]): %lu\n", sizeof(name));
    printf("the number of chars: %lu\n", sizeof(name)/sizeof(char));

    printf("the size of full name (char[]): %lu\n", sizeof(full_name));
    printf("the number of chars: %lu\n", sizeof(full_name)/sizeof(char));
    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}