#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Please enter first Value :");
    scanf("%d", &a);
    printf("Please enter second value :");
    scanf("%d", &b);
    printf("Plese enter Function");
    printf("\n1 , 2, 3 and 4");
    printf("\n1 : Sum");
    printf("\n2 : Subtract");
    printf("\n3 : Multiply");
    printf("\n4 : Divide");
    printf("\nPlease enter any Above funtions :");
    scanf("%d", &c);
    if ( c == 1 )
    {
        printf("Your a + b is %d", a + b);
    }
    else
    {
        if ( c == 2)
        {
            printf("a - b is %d", a - b);
        }
        else
        {
            if (c == 3)
            {
                printf("a * b is %d", a * b);
            }
            else if( c == 4)
            {
                printf("a / b is %d", a / b);
            }
            else
            {
                printf("Invaild input!");
            }
        }      
    }
}