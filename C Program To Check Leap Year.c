#include <stdio.h>
int main()
{
    int num;
    printf("Enter The Year:");
    scanf("%d", &num);
if(num % 400 == 0)
    printf("%d is a Leap Year.",num);
else 
    printf("%d is a Not a Leap Year.",num);
    return 0;
    }
