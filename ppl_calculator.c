

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int two_operands()
{

    int num1,num2;
    float result;
    char ch;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    printf("Choose operation to perform (+,-,*,/,%,^): ");
    scanf(" %c",&ch);

    result=0;
    switch(ch)
    {
        case '+':
            result=num1+num2;
            break;

        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;

        case '/':
            result=(float)num1/(float)num2;
            break;

        case '%':
            result=num1%num2;
            break;

        case '^':
            result=pow(num1,num2);
            break;
        default:
            printf("Invalid operation.\n");
    }

    printf("Result: %d %c %d is %f\n",num1,ch,num2,result);
    return 0;
}

int three_operands()
{
    int num1,num2, num3;
    float result, result2;
    char ch;
    char ch1;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);

    printf("Choose first operation to perform (+,-,*,/,%,^): ");
    scanf(" %c",&ch);
    printf("Choose second operation to perform (+,-,*,/,%,^): ");
    scanf(" %c",&ch1);

    result=0;
    switch(ch)
    {
        case '+':
            result=num1+num2;
            break;

        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;

        case '/':
            result=(float)num1/(float)num2;
            break;

        case '%':
            result=num1%num2;
            break;
        case '^':
            result=pow(num1,num2);
            break;
        default:
            printf("Invalid operation.\n");
    }
    printf("Result: %d %c %d = %f\n",num1,ch,num2,result);

    result2 = 0;
     switch(ch1)
    {
        case '+':
            result2=result+num3;
            break;

        case '-':
            result2=result-num3;
            break;

        case '*':
            result2=result*num3;
            break;

        case '/':
            result2=(float)result/(float)num3;
            break;

        case '%':
            result2=num2%num3;
            break;
        case '^':
            result=pow(result,num2);
            break;
        default:
            printf("Invalid operation.\n");
    }

    printf("Result: %d %c %d %c %d is %f\n",num1,ch,num2,ch1,num3,result2);
    return 0;
}

int read_from_file()
{
   char ch;
   float result;
   FILE *in_file;
    int number1, number2, sum;

    printf("Choose operation to perform (+,-,*,/,%,^): ");
    scanf("%c", &ch);
    in_file = fopen("file.txt", "r");
        printf("test");
        fscanf(in_file, "%d", &number1);
        fscanf(in_file, "%d", &number2);

        switch(ch)
        {
            case '+':
            result=number1+number2;
            printf("Result: %d %c %d  is %d", number1, ch, number2, result);
            break;

        case '-':
            result=number1-number2;
            printf("Result: %d %c %d  is %d", number1, ch, number2, result);
            break;

        case '*':
            result=number1*number2;
            printf("Result: %d %c %d  is %d", number1, ch, number2, result);
            break;

        case '/':
            result=(float)number1/(float)number2;
            printf("Result: %d %c %d  is %d", number1, ch, number2, result);
            break;

        case '%':
            result=number1%number2;
            printf("Result: %d %c %d  is %d", number1, ch, number2, result);
            break;
        case '^':
            result=pow(number1,number2);
            printf("Result: %d %c %d  is %d", number1, ch, number2, result);
            break;
        default:
            printf("Invalid operation.\n");
        }
        printf("Result: %d %c %d  is %d", number1, ch, number2, result);
        return 0;
        fclose(in_file);
    }


int main()
{

    char ch2;
    do
    {
        char choice;
    printf("                                                   CALCULATOR\n\n");
    printf("                                ***Enter how many operands you would like to manipulate***\n");
    printf("                                     1.Two operands\n");
    printf("                                     2.Three operands\n");
    printf("                                     3.Read from a file\n");
    printf("Enter choice:\n");
    scanf("%c",&choice);

    char ch;
    switch(choice)
    {
            case '1':
                two_operands();
                break;
            case '2':
                three_operands();
                break;
            case '3':
                printf("Choose operation to perform (+,-,*,/,%,^): ");
                scanf("%c", &ch);
                read_from_file();
                break;
            default:
                printf("Invalid operation.\n");
    }
    } while (ch2 != 'n');

}
