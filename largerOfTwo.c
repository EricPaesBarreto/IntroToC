#include <stdio.h>

int get_number(char *prompt) {
    int num;
    printf("Enter %s: ", prompt);
    scanf("%d", &num);
    return num;
}

int get_larger(int num1, int num2){
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1 = get_number("the first number");
    int num2 = get_number("the second number");
    int largest = get_larger(num1, num2);
    printf("The larger number of %d and %d is %d\n", num1, num2, largest);
}
