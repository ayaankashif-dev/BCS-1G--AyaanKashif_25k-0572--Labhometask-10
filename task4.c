#include <stdio.h>

int main() {


    char msg[200];
    char enc[200];
    char dec[200];


    printf("Enter message: ");
    fgets(msg, 200, stdin);



    int i = 0;

    while(msg[i] != '\0'){

        char c = msg[i];

        if(c >= 'a' && c <= 'z'){
            enc[i] = ((c - 'a' + 3) % 26) + 'a';
        }

        else if(c >= 'A' && c <= 'Z'){
            enc[i] = ((c - 'A' + 3) % 26) + 'A';
        }

        else{
            enc[i] = c;
        }

        i++;
    }

    enc[i] = '\0';



    i = 0;

    while(enc[i] != '\0'){

        char c = enc[i];

        if(c >= 'a' && c <= 'z'){
            dec[i] = ((c - 'a' - 3 + 26) % 26) + 'a';
        }

        else if(c >= 'A' && c <= 'Z'){
            dec[i] = ((c - 'A' - 3 + 26) % 26) + 'A';
        }

        else{
            dec[i] = c;
        }

        i++;
    }

    dec[i] = '\0';



    printf("\nEncrypted: %s", enc);
    printf("\nDecrypted: %s", dec);


    return 0;
}