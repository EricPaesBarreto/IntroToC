#include <stdio.h>

int get_number(char *prompt) {
    int num;
    printf("Enter %s: ", prompt);
    scanf("%d", &num);
    return num;
}

int main() {
    int num1 = get_number("the first number");
    int num2 = get_number("the second number");

    if (num1 == num2){
        print("1");
    }
    else {
        printf("%d\n", num1 + num2);
    }
    return 1;
}