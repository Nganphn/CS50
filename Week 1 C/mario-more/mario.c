#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int left, int right);
int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Heigh: ");
    }
    while (n < 1 || n > 8);
    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {
        // Print row of bricks
        print_row(n - (i + 1), i + 1, i + 1);
    }
}

void print_row(int spaces, int left, int right)
{ // Print spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    // Print left hashes
    for (int i = 0; i < left; i++)
    {
        printf("#");
    }
    // Print gap
    printf("  ");
    // Print right hashes
    for (int i = 0; i < left; i++)
    {
        printf("#");
    }
    printf("\n");
}