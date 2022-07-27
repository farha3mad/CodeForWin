/*
 *       File : main.c
 *      Author: Eng.Farha Emad Mohamed
 *  Created on: 26/7/2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //for I/O buffer problem
    setvbuf(stdout,NULL,_IONBF,0);
    setvbuf(stderr,NULL,_IONBF,0);

    //required variables
    char item_name[50];
    float item_price;
    float final_item_price=0;
    int overnight_shipping;
    float total_price=0;
    int choice;
    int No_of_items=0;

    printf("=============Welcome to online market=============\n");

    while(1){

        printf("Please choose an option: \n");
        printf("(1)Add items\n");
        printf("(2)Checkout\n");
        scanf("%d",&choice);

        if(choice == 1)
        {

            printf("Enter item name: ");
            scanf("%s",&item_name);
            printf("Enter item price: ");
            scanf("%f",&item_price);
            printf("Is overnight shipping needed? 1)YES 2)NO\n");
            scanf("%d",&overnight_shipping);

            //counting the number of items added
            ++No_of_items;

            //calculating the total price for the item
            if(item_price < 10.0)
            {
               final_item_price = item_price + 2;
            }
            else if(item_price >= 10.0)
            {
               final_item_price = item_price + 3;
            }

            //add overnight shipping
            if(overnight_shipping == 1)
            {
                final_item_price += 5;
            }

            //adding the item price to the total receipt
            total_price += final_item_price;

            printf("\nItem name: %s\t Item price: %.2f\tTotal item price: %.2f\n",item_name,item_price,final_item_price);
            printf("===================item added successfully=====================\n\n");

        }

        else if(choice == 2)
        {

            if(No_of_items >= 2)
            {
                printf("Total number of items: %d\tTotal price: %.2f\n",No_of_items,total_price);

            }
            else
            {
                printf("[ERORR] 2 items are required as a minimum for one order!!\n");
            }

            break;
        }

        else
        {
            printf("[ERORR] Invalid Choice!!\n");
        }
    }

    return 0;
}
