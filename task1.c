#include <stdio.h>
#include <string.h>

int main() {

    char pass[100];

printf("Enter the password: ");
    scanf("%s" , pass);


    int len = strlen(pass);

    int big = 0;
    int num = 0;
    int spe = 0;


    for(int i=0; i<len; i++) {

        if(pass[i] >= 'A' && pass[i] <= 'Z') {
            big = 1;
        }

        if(pass[i] >= '0' && pass[i] <= '9') {
            num = 1;
        }

        if(pass[i]=='!' || pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%') {
            spe = 1;
        }

    }



    if(len >= 8 && big==1 && num==1 && spe==1) {
        printf("Strong Password");
    }
    else {
        printf("Weak Password");
    }

    return 0;
}