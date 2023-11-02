#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("The total number of command-line arguments is: %d\n", argc);

    printf("The command-line arguments are:\n");
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return (0);
}
