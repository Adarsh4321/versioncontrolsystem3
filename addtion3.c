#include <stdio.h>
int main() {    

    int number1, number2, s;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    s = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, s);
    return 0;
}

