#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    int counter_main_0 = 0;
    int counter_main_1 = 0;
    int counter_main_2 = 0;
    int counter_letters = 0;
    int counter_plain = 0;
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    string key = argv[1];
    while (key[counter_main_0] != '\0')
    {
        if (!isalpha(key[counter_main_0]))
        {
            printf("Key must only contain letters.\n");
            return 1;
        }
        // Key checked for letters
        counter_main_0++;
    }
    while (key[counter_main_1] != '\0')
    {
        counter_letters++;
        counter_main_1++;
    }
    if (counter_letters != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    while (key[counter_main_2] != '\0')
    {
        for (int i = counter_main_2 + 1; key[i] != '\0'; i++)
        {
            if (tolower(key[counter_main_2]) == tolower(key[i]))
            {
                printf("Key must not contain repeated letters.\n");
                return 1;
            }
        }
        counter_main_2++;
    }
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    while (plaintext[counter_plain] != '\0')
    {
        char letter = plaintext[counter_plain];
        if(isalpha(letter))
        {
            int index = toupper(letter) - 'A';
            if (isupper(letter))
            {
                printf("%c", toupper(key[index]));
            }
            else
            {
                printf("%c", tolower(key[index]));
            }
        }
        else
        {
            printf("%c", letter);
        }
        counter_plain++;
    }
    printf("\n");
    return 0;
}
