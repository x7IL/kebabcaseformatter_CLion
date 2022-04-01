#include <stdio.h>

int main(int argc, char ** argv) {
    int a = 0;
    if(argv[1] == NULL){
        return 84;
    }
    for (int i = 0; argv[1][i] != '\0'; i++) {
        a++;
    }

    if(a == 0){
        printf("\n");
    }

    for (int i = 0; argv[1][i] != '\0'; i++) {
        if (argv[1][i] >= 65 && argv[1][i] <= 90) {
            printf("%c", argv[1][i] + 32);
        } else if (argv[1][i] >= 97 && argv[1][i] <= 122) {
            printf("%c", argv[1][i]);

        } else if (argv[1][i] == ' ' && i == 0) {

        } else if (argv[1][i - 1] == ' ' && argv[1][i] == ' ') {

        } else if (argv[1][i] == ' ' && argv[1][i + 1] == '\0') {

        } else if (argv[1][i] == ' ') {
            printf("-");
        } else if (argv[1][i] >= 48 && argv[1][i] <= 57) {
            if (argv[1][i - 1] >= 48 && argv[1][i - 1] <= 57) {
                printf("%c", argv[1][i]);
            } else {
                printf("-%c", argv[1][i]);
            }
        }
    }
}
