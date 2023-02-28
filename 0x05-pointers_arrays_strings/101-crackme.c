#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // The hardcoded password to check against
    char password[] = "MySuperSecretPassword";

    // Check if a password was provided as an argument
    if (argc < 2) {
        printf("Usage: %s <password>\n", argv[0]);
        return 1;
    }

    // Check if the provided password matches the hardcoded value
    if (strcmp(argv[1], password) == 0) {
        printf("Tada! Congrats\n");
    } else {
        printf("Wrong password\n");
    }

    return 0;
}
