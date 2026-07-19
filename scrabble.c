#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    int value[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    string word_1 = get_string("Player 1: ");
    int counter_1 = 0;
    int sum_1 = 0;
    int letter_price_1;
    while (word_1[counter_1] != '\0')
    {
        char letter = word_1[counter_1];
        if (isalpha(letter))
        {
            letter = tolower(letter);
            letter_price_1 = value[letter - 'a'];
            sum_1 = sum_1 + letter_price_1;
        }
        counter_1++;
    }
    string word_2 = get_string("player 2: ");
    int counter_2 = 0;
    int sum_2 = 0;
    int letter_price_2;
    while (word_2[counter_2] != '\0')
    {
        char letter = word_2[counter_2];
        if (isalpha(letter))
        {
            letter = tolower(letter);
            letter_price_2 = value[letter - 'a'];
            sum_2 = sum_2 + letter_price_2;
        }
        counter_2++;
    }

    if (sum_1 > sum_2)
    {
        printf("Player 1 wins!\n");
    }
    else if (sum_2 > sum_1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }


}
