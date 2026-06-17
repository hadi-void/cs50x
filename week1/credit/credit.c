#include <stdio.h>
#include <cs50.h>

int main (void)
{

    long cardno = get_long("Number: ");

    int sum = 0;
    int swich = 0;
    int digitno = 0;
    long frstdigits = cardno;

    for(long temp = cardno; temp > 0; temp /= 10)
    {
        if(swich == 0)
        {
            sum += temp % 10;
        }
        else
        {
            int product = (temp % 10) * 2;
            if(product > 9)
            {
                sum += (product % 10) + (product / 10);
            }
            else
            {
                sum += product;
            }
        }

        swich = !swich;
    }

    if(sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    for(long temp = cardno; temp > 0; temp /= 10)
    {
        digitno++;
    }

    for(int i = digitno; i > 2; i--)
    {
        frstdigits /= 10;
    }

    if(digitno == 15 && (frstdigits == 34 || frstdigits == 37))
    {
        printf("AMEX\n");
    }
    else if(digitno == 16 && frstdigits >= 51 && frstdigits <= 55)
    {
        printf("MASTERCARD\n");
    }
    else if((digitno == 13 || digitno == 16) && (frstdigits / 10) == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
