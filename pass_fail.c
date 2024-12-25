/*2. Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user*/

#include<stdio.h>

int main(){
    int S1,S2,S3;
    printf("\n Please, Enter your percentage obtained in Math = ");
    scanf("%d",&S1);
    printf("\n Please, Enter your percentage obtained in Physics = ");
    scanf("%d",&S2);
    printf("\n Please, Enter your percentage obtained in Chemistry = ");   
    scanf("%d",&S3);
    
    int Avg,num=0;
    Avg = (S1+S2+S3)/3;

    if(S1>=33) {
        printf("Your have Passed with a percentage of %d %% in Math \n",S1);
        ++num;
    } else {
        printf("Sorry, You have Failed in your Math exam \n");
        }
    if(S2>=33) {
        printf("Your have Passed with a percentage of %d %% in Physics \n",S2);
        ++num;
    } else {
        printf("Sorry, You have Failed in your Physics exam \n");
        }
    if(S3>=33) {
        printf("Your have Passed with a percentage of %d %% in Chemistry \n",S3);
        ++num;
    } else {
        printf("Sorry, You have Failed in your Chemistry exam \n");
        }    
    if (num == 3) {
        printf("congrates!!, you have passed in Your Semester \n");
        printf("Your total percentage is %d %% \n",Avg);
        }
        else {
            printf("Sorry, You have Failed in your Semester \n");
        }
    return 0;
}