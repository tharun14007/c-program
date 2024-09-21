#include <stdio.h>

int main()
{
    int cost_price,sell_price, amt; 
    printf("Enter cost price: ");
    scanf("%d", &cost_price);
    printf("Enter selling price: ");
    scanf("%d", &sell_price);
    
    if(sell_price > cost_price)
    {
        amt = sell_price - cost_price;
        printf("Profit = %d", amt);
    }
    else if(cost_price > sell_price)
    {
        amt = cost_price - sell_price;
        printf("Loss = %d", amt);
    }
    else
    {
        printf("No Profit No Loss.");
    }

    return 0;
}
