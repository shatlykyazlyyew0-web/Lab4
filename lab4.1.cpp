#include <stdio.h>

int main()
{
    int flag = 1;
    int point = 0;
    printf("Print: ");
    char str[1000];
    fgets(str, 1000, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            point += 1;
        }
        if (str[i] == ')') {
            point -= 1;
        }
        if (point < 0) {
            flag = 0;
            break;
        }
    }
    if (flag && point == 0) {
        printf("Balanced");
    }
    else {
        printf("not balanced");
    }
    return 0;
}