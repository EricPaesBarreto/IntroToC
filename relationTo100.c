#include <stdio.h>

int get_number(char *prompt) {
    int num;
    printf("Enter %s: ", prompt);
    scanf("%d", &num);
    return num;
}

int main() {
    int num = get_number("a number");

    if (num < 100){
        printf("%d is less than 100\n", num);
    } else if (num == 100){
        printf("%d is equal to 100\n", num);
    } else {
        printf("%d is greater than 100\n", num);
    }
}
