//
// Created by Josh Varkey on 9/9/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double itemPrice;
    double quantity;
    double frac;
    double intp;
    double total;
    double finaltotal;
    double discount;
    printf("Welcome to “TEMPLE” Store\n");
    printf("Please enter item price: ");
    /*
     * scanf is the the method that is used in order to take in input
     * %lf is a place holeder that tells the compiler to go and relcae the place
     * holder with the variable that come after the & sign
     */
    scanf("%lf", &itemPrice);
    if (itemPrice < 0){
        printf("Please enter a valid item price that is not negative.\n");
        printf("please re run the program");
        exit(1);
    }
    /*
     * modf willl take the double and split it into two parts a whole number part
     * and a decimal part, that is how we can tell if something is a decimal
     */
    frac = modf(itemPrice,&intp);
    if(frac != 0.0){
        printf("please enter a valid item price and run the program again");
        exit(1);
    }
    //_________________Quan_____________

    printf("Please enter a quantity : ");
    scanf("%lf", &quantity);
    if (itemPrice < 0){
        printf("Please enter a valid quantity that is not negative.\n");
        printf("please re run the program");
        exit(1);
    }
    frac = modf(quantity,&intp);
    if(frac != 0.0){
        printf("please enter a valid item price and run the program again");
        /*
         * exit one is used when there is a problem in the code
         *
         */
        exit(1);
    }
    //_________ Rest of code__________________


    if (quantity <= 49){
        total = (quantity * itemPrice);

    } else if (quantity >= 50 && quantity < 100){
        total = itemPrice * quantity;
        discount = .1 * total;
        finaltotal = total -discount;


    } else if (quantity >= 100 && quantity < 150){
        total = itemPrice * quantity;
        discount = .15 * total;
        finaltotal = total - discount;

    } else if (quantity >= 150){
        total = itemPrice * quantity;
        discount = .25 * total;
        finaltotal = total -discount;

    }

    printf("quantity: %lf\n", quantity);
    printf("item orice: $%lf\n", itemPrice);
    printf("discount: $%lf\n", discount);
    printf("total: $%lf\n", total);
    printf("Final total: $%lf\n",finaltotal);
    /*
     * exit zero is used when all of the code has ran smoothly and it is time to end the code
     */
    exit(0);
};
