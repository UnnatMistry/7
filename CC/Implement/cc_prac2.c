#include <stdio.h>
#include <string.h>
char input[100];
int i = 0;

int T()
{
    if (input[i] == 'b')
    {
        i++;
        if (T())
            return 1;
        else
            return 0;
    }
    else
        return 1;
}

int S()
{
    if (input[i] == 'a')
    {
        i++;
        if (S())
        {
            if (input[i] == 'a')
            {
                i++;
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
    }
    else if (T())
    {
        return 1;
    }
    else
        return 0;
}

void main()
{
    printf("Enter the string to be checked : ");
    gets(input);
    if (S())
    {
        if (input[i] == '\0')
            printf("String is accepted\n\n");
        else
            printf("String is not accepted\n\n");
    }
    else
        printf("String is not accepted\n\n");
}
