#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int words_counter = 1;
    int sentences_counter = 0;
    int letters_counter = 0;
    int counter = 0;
    //main variables
    while (text[counter] != '\0')
    {
        if (isalpha(text[counter]))
        {
            letters_counter++;
        }
        else if (text[counter] == ' ')
        {
            words_counter++;
        }
        else if (text[counter] == '.' || text[counter] == '!' || text[counter] == '?')
        {
            sentences_counter++;
        }
        counter++;
    }
    // сalculate Coleman–Liau index
    float L = letters_counter * 100.0 / words_counter;
    float S = sentences_counter * 100.0 / words_counter;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    index = round(index);
    //substitution
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) index);
    }
    //output
}
