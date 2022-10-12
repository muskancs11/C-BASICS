#include <stdio.h>
#include <conio.h>

void game(char[], char[]);

int main()
{
    char word[20] = {'A', 'N', 'D', 'R', 'O'};
    char guessed[20];
    printf("\t\t \"Rules\" \n You have only 5 chance if you correct otherwise you have only one chance be carefull \n You have to only use all capital Letters \n You have to enter lettes \'ONE\' by one \n Example - Lets Assume Acutual Word is AMAN so you have to enter A in first pass then M and so on NOW its your turn \n");
    game(word, guessed);
    getch();
    return 0;
}
void game(char answer[], char guess[])
{
    int x = 0;
    char letter;
    printf("Enter letter below \n");
    while (x < 5)
    {
        scanf(" %c", &letter);

        if (letter == answer[x])
        {
            guess[x] = letter;
            printf("keep going\n");
        }
        else
        {
            printf("You failed Try again\n");
            break;
        }

        ++x;
    }
}