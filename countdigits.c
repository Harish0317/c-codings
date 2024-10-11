#include <stdio.h>

int main() {
    int n,m=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    // count number of digit
    while(n!=0){
        m++;
        n/=10;
        
    }
    printf("number of digits: %d",m);
    return 0;
}
