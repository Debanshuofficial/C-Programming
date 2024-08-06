#include <stdio.h>

int main(){

    int a = 10;
    int b;

    printf("Enter a value: ");
    scanf("%d", &b);

    int var3 = a + b ;
    int var4 = a - b ;

    printf("The answer of SUM is: %d ",var3);
    printf("The answer of Minus is: %d ",var4);

    char rajdip[] = "raj";
    int rajmother;

    printf("Enter an Integer input: ");
    scanf("%d", &rajmother);

    printf("p1, p2, p3, p4, %s, p6, p7, %d, p9", rajdip, rajmother);

    return 0;
}