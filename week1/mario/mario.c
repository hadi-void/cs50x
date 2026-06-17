#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while(!(height >= 1 && height <= 8));



    // blocks
    for(int i = 0; i < height; i++)
    {

        for(int k = height - 1; k > i; k--)
        {
            printf(" ");
        }


        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }


        printf("  ");


        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }


        printf("\n");
    }
}
