#include <stdio.h>

int main()
{
    int i, x;
    char str[100];

    printf("Enter a String:  ");
    gets(str);

    printf("\n");
    printf("Select an Operation:\n");
    printf("1. Encryption\n");
    printf("2. Decryption\n");
    printf("Enter your Choice:  ");
    scanf("%d", &x);

    switch (x)
    {
        case 1:
        {
            for (i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 5;

            printf("\nEncryption Successfull !!");
            printf("\nEncrypted String:  %s", str);
            printf("\n");
            break;
        }

        case 2:
        {
            for (i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] - 5;

            printf("\nDecryption Successful !!");
            printf("\nDecrypted String:  %s", str);
            printf("\n");
            break;
        }

        default:
        {
            printf("!! Fatal Error !!");
            printf("\n");
            printf("! No Such Option !");
        }
    }

    return 0;
}