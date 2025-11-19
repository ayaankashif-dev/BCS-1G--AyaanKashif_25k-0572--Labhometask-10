#include <stdio.h>

int main() {
    char email[100];
    int i, found = 0;

    printf("Enter an email: ");
    scanf("%s", email);

    for (i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') {
            printf("Domain: %s\n", &email[i+1]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Domain: Invalid email\n");
    }

    return 0;
}