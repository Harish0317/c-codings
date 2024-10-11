#include <stdio.h>

int main() {
    int n,m=0,sum=0;
    printf("enter a number;");
    scanf("%d",&n);
    while(n!=0){
        m=n%10;
        sum=sum*10+m;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}
