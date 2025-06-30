#include <stdio.h>
#include <string.h>

int main() {

    int isDone = 0;


    while(isDone != 1) {
        printf("Enter password\n");
    
    
        char result[100];
    
        scanf("%99s", result);
    
        
        if (strcmp(result, "done") == 0) {
            isDone = 1;
        }

        const int len = strlen(result);


        printf("\033[0;31mIncorrect password\n");

        printf("\033[0;33m");
        for (int i = 0; i < 20; i++) {
            printf("-");
        }
        printf("\033[0m\n");
    }
    return 0;
}