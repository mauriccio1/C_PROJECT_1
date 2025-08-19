#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct {
    int payPeriod;
    double grossPay;
    double netPay;
    double incomeTax;
}INCOME;

struct {


};

int isThisANeed(char *PURCHASE){
    char need[6];
    printf("Does this purchase (%s) fall into one of these categories [Housing, Utilities, Food, Insurance]?\n", PURCHASE);
    scanf("%5s", need);
        if((strcasecmp(need, "yes") == 0) || (strcasecmp(need, "y") == 0 )){
            return 1;
        } else if ((strcasecmp(need, "no") == 0) || (strcasecmp(need, "n") == 0 )) {
            printf("Is this purchase (%s) Necessary for you to live?\n", PURCHASE);
            scanf("%5s", need);
            if((strcasecmp(need, "yes") == 0) || (strcasecmp(need, "y") == 0 )){
            return 1;
            } else {
                printf("This purchase (%s) is a want not a need\n",PURCHASE);
                return 0;
            }
        } else{
            printf("Please enter a valid response i.e. yes or no\n");
            return -1;
        }

}

int affordability(double BALANCE, char *PURCHASE, double PURCH_PRICE){
    int need_result;
    do { need_result = isThisANeed();
    } while (need_result == -1);

   double percentOfBalance = PURCH_PRICE / BALANCE * 100;

    if((need_result == 1 && percentOfBalance <= 0.35) || (need_result == 0 && percentOfBalance <= 0.15)) {
        printf("Based on your current balanace you can reasonably afford to buy (%s).\n", PURCHASE);
        return 1;


    } else {
        printf("Sorry you cant afford to buy (%s) based on your current balance :(.\n", PURCHASE);
        return 0;
    }







}

void calculateTax(){

}

//check if month is 31 or 30 days returns 1 / 0
void monthCheck(const char* month){
    if
};


void interestCalculation(int APR, double BALANCE){




};

int main (){


return 0;
}

