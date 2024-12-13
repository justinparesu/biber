#include <stdio.h>
#include <string.h>
#include <ctype.h>
int check(const char *);

int check(const char *password)
{
    int has_upper = 0;
    int has_lower = 0;
    int has_digit = 0;
    int length = strlen(password);
    
    for (int i = 0; i < length; i++)
    {
        if(isupper(password[i]))
        {
            has_upper = 1;
        }
        if (islower(password[i]))
        {
            has_lower = 1;
        }
        if (isdigit(password[i]))
        {
            has_digit = 1;
        }
    }
    return length >= 8 & has_upper & has_lower & has_digit;
}

int main()
{
    char password[100];
    
    printf("Please enter your password: \n ");
    scanf("%99s", password);
    
    if(check(password))
    {
        printf("Your password is strong. \n ");
    }
    else
    {
        printf("[Warning!!!!!!]\nPlease change the password to at least 8 characters includeing numbers, uppercase and lowercase letters! \n");
    }

    return 0;
}