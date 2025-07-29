#include <stdio.h>
#include <stdlib.h>

// count letter in alphabet and code fisrt symbol of alphabet

#define SYMB_IN_ALPHABET 26
#define CODE_FIRST_SYMBOL 65

// format output count of symbols in string

void printCountSymbols(const int counts[])
{
    for(char i = 0; i < SYMB_IN_ALPHABET; ++i)
    {
        if(counts[i] > 0)
        {
            printf("%d%c ", counts[i], i + CODE_FIRST_SYMBOL);
        }
    }
}

//calculate count symbols in string

void calculateCountSymbols(const char string[], int counts[])
{

    for(int i = 0; string[i] != '\0'; ++i)
    {
        if (string[i] >= CODE_FIRST_SYMBOL && string[i] <= (SYMB_IN_ALPHABET + CODE_FIRST_SYMBOL))
        {
            char code_symbol = abs(string[i] - CODE_FIRST_SYMBOL);

            ++counts[code_symbol];
        }
    }
}
int main()
{
    //test-code
    int counts[SYMB_IN_ALPHABET] = {0};
    char string[] = "AAAA BBBB CCCC DDDD ZZZZ";

    calculateCountSymbols(string, counts);

    printCountSymbols(counts);

}