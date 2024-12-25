/*3. Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 10%
 Above 10.0L 20%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

#include<stdio.h>

int main(){
    int Total_income,income,num;
    long long int Aadhar,Acc;

    printf("\n Enter your Aadhar card no. : ");
    scanf("%lld",&Aadhar);

    printf("\n Enter your account no. : ");
    scanf("%lld",&Acc);

    printf("\n Enter your annual year income in INR ");
    scanf("%d",&Total_income);
    income=Total_income-50000;
    printf("\n Your income after Tax exumption(due to health/life insurence) is : %d\n",income);

     if (income < 250000) {
        num = 1;
    } else if (income < 500000) {
        num = 2;
    } else if (income < 1000000) {
        num = 3;
    } else {
        num = 4;// more than 10 lakhs
    }
    
    switch (num)
    {
    case 1:
        printf("\nYour income of %d INR, fall under first Tax slab with 0%% Tax. \n",income);
        printf("\nHence,(%d INR)Tax need to be paided from account no. %lld by user %lld \n",0,Acc,Aadhar);
        break;
    
    case 2:
        printf("\nYour income of %d INR, fall under second Tax slab with 5%% Tax. \n",income);
        int two=(5*income)/100;
        printf("\nHence,(%d INR)Tax need to be paided from account no. %lld by user %lld \n",two,Acc,Aadhar);
        break;

    case 3:
        printf("\nYour income of %d INR, fall under second Tax slab with 10%% Tax. \n",income);
        int three=(10*income)/100;
        printf("\nHence,(%d INR)Tax need to be paided from account no. %lld by user %lld \n",three,Acc,Aadhar);
        break;

    default:
        printf("\nYour income of %d INR, fall under second Tax slab with 20%% Tax. \n",income);
        int four=(20*income)/100;
        printf("\nHence,(%d INR)Tax need to be paided from account no. %lld by user %lld \n",four,Acc,Aadhar);
        break;
    }
    return 0;
}