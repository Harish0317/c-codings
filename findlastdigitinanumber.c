#include <stdio.h>

int main() {
    int n,m=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    // To find last digit of a number
    m=n%10;
    printf("Last Digit of a number is: %d",m);
    return 0;
}
