#include <stdio.h>

int get_age() {
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);
    return age;
}

int main() { 
    int age = get_age();
    printf("You will be %d in 480 months\n", age + 480 / 12);
    return 0;
}
