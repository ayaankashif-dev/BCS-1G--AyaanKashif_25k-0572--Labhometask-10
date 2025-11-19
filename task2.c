#include <stdio.h>

int main() {
    char emails[4][50] = {
        "user@gmail.com",
        "john.doe@company.org",
        "invalid-email",
        "admin@university.edu"
    };

    int i, j, found;

    printf("Email Domain Extraction:\n\n");

    for (i = 0; i < 4; i++) {
        printf("Email: %s\t -> ", emails[i]);
        found = 0;

        for (j = 0; emails[i][j] != '\0'; j++) {
            if (emails[i][j] == '@') {
                printf("Domain: %s\n", &emails[i][j+1]);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Domain: Invalid email\n");
        }
    }

    return 0;
}