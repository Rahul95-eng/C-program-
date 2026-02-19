#include <stdio.h>
int main()  { 
    int a,b;
    char op;

    printf("input two number :");
    scanf("%d%d",&a,&b);
    printf("input operation");
    scanf(" %c",&op);

    switch(op)
    {
            case('+'):
            printf("%d",a+b);
            break;
            case('-'):
            printf("%d", a-b);
            break;
            case('*'):
            printf("%d",a*b);
            break;
            case('/'):
            printf("%d",a/b);
            break;
            case('%'):
            printf("%d",a%b);
            break;
            default:
            printf("invalid operation");
    }
            return 0;




    }
