#include <stdio.h>
#include <unistd.h>

// ./a.out "Nau way!"
// ./a.out " Chocolatines2.0? Or kebab64? " | cat -e
// ./a.out "" | cat -e
// ./a.out ; echo $?

void putcharrr(char c){
    write(1,&c,1);
}

void putcharr(char *c){
    write(1,&c,2);
}

void putcharr2(char c){
    write(1,"-",1);
    write(1,&c,1);
}

int main(int argc, char ** argv) {

    if(argv[1] == NULL){
        return 84;
    }
    int a = 0;
    for (int i = 0; argv[1][i] != '\0'; i++) {a++;}
    (a == 1) ? putcharr("84") : (a == 0) ? putcharr("\n") : 0;
    for (int i = 0; argv[1][i] != '\0'; i++) {
        (argv[1][i] >= 65 && argv[1][i] <= 90) ? putcharrr(argv[1][i] + 32):
        (argv[1][i] >= 97 && argv[1][i] <= 122) ? putcharrr(argv[1][i]):
        (argv[1][i] == '_' && i == 0) ? 0 : (argv[1][i - 1] == '_' && argv[1][i] == '_') ? 0:
        (argv[1][i] == '_' && argv[1][i + 1] == '\0') ? 0 : (argv[1][i] == '_') ? putcharrr('-'):
        ((i!=0 && i!= a-1) && argv[1][i] == ' ') ? putcharrr('-'):
        (argv[1][i] >= 48 && argv[1][i] <= 57) ? (argv[1][i - 1] >= 48 && argv[1][i - 1] <= 57) ? putcharrr(argv[1][i]):
        putcharr2(argv[1][i]) : 0;
    }
    return 0;
}
