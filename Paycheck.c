//
// Created by Josh Varkey on 9/7/23.
// Course: CIS 2107 sec 002
// Student ID: 915910588
// PayCheck class
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double employeeNum;
    double hourlySal;
    double weeklyTime;
    double frac;
    double intp;
    double netpay;
    double overtime;
    double regular;
    printf("Welcome to “TEMPLE HUMAN RESOURCES”\n");
    printf("Please enter employee number: ");
    /*
     * scanf is the the method that is used in order to take in input
     * %lf is a place holeder that tells the compiler to go and relcae the place
     * holder with the variable that come after the & sign
     */
    scanf("%lf", &employeeNum);
//_________Employee________
    if (employeeNum < 0){
        printf("Please enter a vaild employee number that is not negative.\n");
        printf("please re run the program");
        /*
        * exit one is used when there is a problem in the code
        *
        */
        exit(1);
    }
    /*
    * modf willl take the double and split it into two parts a whole number part
    * and a decimal part, that is how we can tell if something is a decimal
    */
    frac = modf(employeeNum,&intp);
    if(frac != 0.0){
        printf("please enter a vaild employee number and run the program again");
        exit(1);
    }

    // _________HOUR________________
    printf("Please enter hourly rate: ");
    scanf("%lf", &hourlySal);
    if (hourlySal < 0){
        printf("Please enter a vaild hourly sal that is not negative.\n");
        printf("please re run the program");
        exit(1);
    }
    frac = modf(hourlySal,&intp);
    if(frac != 0.0){
        printf("please enter a vaild hourly sal and run the program again");
        exit(1);
    }


    //___________Week__________________

    printf("Please enter weekly time: ");
    scanf("%lf", &weeklyTime);
    if ( weeklyTime< 0){
        printf("Please enter a vaild weekly sal that is not negative.\n");
        printf("please re run the program");
        exit(1);
    }
    frac = modf(weeklyTime,&intp);
    if(frac != 0.0){
        printf("please enter a vaild hourly sal and run the program again");
        exit(1);
    }
// _______Start of math protion___________________
    if (weeklyTime > 40){
        regular = 40 * hourlySal;
        double overhours = weeklyTime -40;
        overtime = overhours * hourlySal* 1.5;
        netpay = regular + overtime;

    } else {
        netpay = weeklyTime * hourlySal;
    }
    printf("employee Num: %lf\n", employeeNum);
    printf("hourly Rate $%lf\n", hourlySal);
    printf("weekly Time: %lf\n", weeklyTime);
    printf("regular pay: $%lf\n", regular);
    printf("overtime pay: $%lf\n", overtime);
    printf("Net pay: $%lf\n", netpay);
    /*
    * exit zero is used when all of the code has ran smoothly and it is time to end the code
    */
    exit(0);
}
