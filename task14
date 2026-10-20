#include <stdio.h>

int get_number(char *prompt) {
    int num;
    printf("Enter %s: ", prompt);
    scanf("%d", &num);
    return num;
}

int get_result(int num1, int num2, int num3){
        if (num1 < num2 && num1 > num3){
        return num1 * num2;
    }
    else if (num2 < num3 || num2 < num1){
        return num2/num3;
    }
    else if((num3 > num1 && num2 != 5) || (num2 > num3 && num1 != 0)){
        return num1 + num2 + num3;
    }
    
    return -1;
}

int main(){
    int num1 = get_number("the first number");
    int num2 = get_number("the second number");
    int num3 = get_number("the third number");

    return 1;
}