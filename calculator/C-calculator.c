#include <stdio.h>

void calculation (double x, double y, char op);

int main()
{
    double x, y;
    char op;

    printf("enter your first number: ");
    scanf("%lf", &x);

    printf("enter a operator: ");
    getchar();
    op = getchar();

    printf("enter your second number: ");
    scanf("%lf", &y);

    calculation(x, y, op);

    
    return 0;
}
void calculation (double x, double y, char op){
    double result;
    
    switch (op){
        case '+' :
        result = x + y;
        printf("%f + %f = %f", x, y, result);
        break;

        case '-' :
        result = x - y;
        printf("%f - %f = %f", x, y, result);
        break;

        case '*' :
        result = x * y;
        printf("%f * %f = %f", x, y, result);
        break;

        case '/' :
        if ( y != 0 ){          //ensures that value of variable 'y' given by the user is not zero
            result = x / y;
            printf("%f / %f = %f", x, y, result);
            break;
        } else{
            printf("error: zero is not a valid input");
            break;
        }
        default :{
            printf("invalid input");
            break;
        }
    }

}