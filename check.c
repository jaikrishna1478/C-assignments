// to check given number is even or odd number
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }

    return 0;
}
