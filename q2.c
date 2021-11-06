 #include <stdio.h>
#include <stdbool.h>
#include<string.h>

bool isChar(char c)
{
    if((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z')){
        return 1;
    }
    else return 0;
}


bool isDigit(const char c)
{
    return (c >= '0' && c <= '9');
}

bool is_valid(char email[])
{

    if (!isChar(email[0])) {
        return 0;
    }

    int At = -1;
    int Dot = -1;


    for (int i = 0; i < strlen(email); i++) {

        if (email[i] == '@') {

            At = 1;
        }


        else if (email[i] == '.') {

            Dot = 1;
        }
    }

    if (At == -1 || Dot == -1)
        return 0;

    if (At > Dot)
        return 0;

    return 1;
}

int main()
{
    char email[100] ;
    scanf("%s",email);
    bool ans = is_valid(email);

    if (ans) {
        printf("The email is valid\n");
    }
    else {
       printf("The email is invalid\n");
    }

    return 0;
}