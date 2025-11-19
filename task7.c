#include <stdio.h>
#include <string.h>

int main() {


    char *students[4] = {"Alice", "Bob", "Charlie", "Diana"};


    char *courses[4][5] = {

        {"Math", "Physics", "English"},
        {"Biology", "Chemistry"},
        {"Math", "Physics", "Computer", "Art"},
        {"History", "Geography", "Physics", "Math", "Music"}

    };


    int count[4] = {3, 2, 4, 5};



    printf("=== Students and Their Courses ===\n\n");

    for(int i=0;i<4;i++){

        printf("%s:\n", students[i]);

        for(int j=0;j<count[i];j++){
            printf("   - %s\n", courses[i][j]);
        }

        printf("\n");
    }



    printf("=== Students taking Physics ===\n\n");

    for(int i=0;i<4;i++){

        for(int j=0;j<count[i];j++){

            if(strcmp(courses[i][j], "Physics") == 0){
                printf("%s\n", students[i]);
                break;
            }

        }

    }



    printf("\n=== Students with more than 3 courses ===\n\n");

    for(int i=0;i<4;i++){
        if(count[i] > 3){
            printf("%s  (%d courses)\n", students[i], count[i]);
        }
    }


    return 0;
}