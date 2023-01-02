#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit[]);

int main(void)
{
    // TODO
    int bit[BITS_IN_BYTE];
    string message = get_string("Messgage: ");
    for (int i = 0; i < strlen(message); i++)
    {
        int a = message[i] - 0;
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            bit[j] = (a >> j) & 1;
        }
        print_bulb(bit);
    }
}

void print_bulb(int bit[])
{
    for (int i = BITS_IN_BYTE - 1; i >= 0; i--)
    {
        if (bit[i] == 0)
        {
            // Dark emoji
            printf("\U000026AB");
        }
        else if (bit[i] == 1)
        {
            // Light emoji
            printf("\U0001F7E1");
        }
    }
    printf("\n");
    return;
}