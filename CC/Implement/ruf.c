#include<stdio.h>
#include<string.h>
#include<ctype.h>
  
char input[10];
int i,error;
void E();
void Eprime();
void match(char t);
int main()
{
    i=0;
    error=0;
    printf("Enter an arithmetic expression   :  "); // Eg: a+a*a
    gets(input);
    E();
    if(strlen(input)==i&&error==0)
    {
        printf("\nAccepted..!!!\n");
    }
    else 
    {
        printf("\nRejected..!!!\n");
    }
    return 0;
}
          
          
  
void E()
{
    if(input[i]=='i')
    {
        i++;    
        Eprime();
    }
 
}
void Eprime()
{
     if(input[i]=='+')
     {
        i++;
        if(input[i]=='i')
            i++;
            Eprime();
     }
     else{
        return;
     }
}
// void match(char t)
// {
//     if(input[i]==t)
//     {
//         i++;
//     }
//     else{
//         printf("Error");
//     }
// }