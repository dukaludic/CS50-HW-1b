#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int coins = 0;
    do
    {
        change = get_float("Change: ");
    }
    while (change <= 0);


    change = round(change * 100);
    
    if (change >= 25)
    {
       do
        {
            change = change - 25;
            coins++;
        }
        while (change >= 25); 
    }
    
    if (change >= 10)
    {
       do
        {
            change = change - 10;
            coins++;
        }
        while (change >= 10); 
    }
    
    if (change >= 5)
    {
       do
        {
            change = change - 5;
            coins++;
        }
        while (change >= 5); 
    }
    
    if (change >= 1)
    {
       do
        {
            change = change - 1;
            coins++;
        }
        while (change >= 1); 
    }
        
        printf("Change: %f\n", change);
        printf("Coins: %i\n", coins);
}