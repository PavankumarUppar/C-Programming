#include<stdio.h>
int main()
{
    char ch;
    printf("Enter The Alphabet :: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("It is a Vowel!");
        break;
        default:
            printf("It is a Consonant!");

    }
    return 0;

}
