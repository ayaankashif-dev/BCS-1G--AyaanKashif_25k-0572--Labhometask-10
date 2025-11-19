#include <stdio.h>

int main() {


    char *categories[3] = {"Appetizers", "Main Course", "Desserts"};

    char *items[3][3] = {
        {"Fries", "Garlic Bread", "Spring Rolls"},
        {"Burger", "Chicken Biryani", "Pasta"},
        {"Ice Cream", "Brownie", "Cup Cake"}
    };



    float prices[3][3] = {
        {5.5, 7.0, 8.5},
        {12.0, 15.0, 9.5},
        {6.0, 11.0, 4.5}
    };



    printf("===== RESTAURANT MENU =====\n\n");

    for(int i=0;i<3;i++){

        printf("%s:\n", categories[i]);

        for(int j=0;j<3;j++){
            printf("   - %s  ($%.2f)\n", items[i][j], prices[i][j]);
        }

        printf("\n");
    }



    printf("===== BUDGET FRIENDLY (Under $10) =====\n\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            if(prices[i][j] < 10){
                printf("%s  ->  %s  ($%.2f)\n",
                categories[i], items[i][j], prices[i][j]);
            }

        }
    }


    return 0;
}