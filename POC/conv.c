#include <stdio.h>

void decimalToBinary(int num);
void decimalToOctal(int num);
void decimalToHexadecimal(int num);

int main()
{
    int num, choice;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("\nChoose the conversion type:\n");
    printf("1. Decimal to binary\n");
    printf("2. Decimal to octal\n");
    printf("3. Decimal to hexadecimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            decimalToBinary(num);
            break;
        case 2:
            decimalToOctal(num);
            break;
        case 3:
            decimalToHexadecimal(num);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

void decimalToBinary(int num)
{
    int binary[32], i = 0;

    while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("\nBinary equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void decimalToOctal(int num)
{
    int octal[32], i = 0;

    while (num > 0)
    {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }

    printf("\nOctal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf("\n");
}

void decimalToHexadecimal(int num)
{
    char hex[32];
    int i = 0;

    while (num > 0)
    {
        int rem = num % 16;

        if (rem < 10)
        {
            hex[i] = rem + 48;
        }
        else
        {
            hex[i] = rem + 55;
        }

        num = num / 16;
        i++;
    }

    printf("\nHexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hex[j]);
    }
    printf("\n");
}
