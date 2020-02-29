#include <stdio.h>
int main() {    

    int number1, number2, sum1;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum1 = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum1);
    return 0;
}

