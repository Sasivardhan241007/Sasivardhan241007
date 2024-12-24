#include <stdio.h>
#include <math.h>

int main() {
    int percentage, num;

    printf("Please, Enter your obtained percentage in the exam: ");
    scanf("%d", &percentage);

    if (percentage > 90) {
        num = 1;
    } else if (percentage > 80) {
        num = 2;
    } else if (percentage > 70) {
        num = 3;
    } else if (percentage > 60) {
        num = 4;
    } else if (percentage > 50) {
        num = 5;
    } else if (percentage > 40) {
        num = 6;
    } else if (percentage > 35) {
        num = 7;
    }  else {
        num = 8;
    }

    switch (num) {
    case 1:
      printf("your Grade is A+ \n");
      printf("Outstanding! You have aced it. Keep up this stellar performance! \n");
      break;
    
    case 2:
      printf("your Grade is A- \n");
      printf("Excellent! You are doing great. Just a little more effort for perfection! \n");
      break;

    case 3:
      printf("your Grade is B+ \n");
      printf("Good job! You are on the right track. Keep striving to improve! \n");
      break;

    case 4:
      printf("your Grade is B- \n");
      printf("Not bad! With a bit more focus, you can move to the next level! \n");
      break;

    case 5:
      printf("your Grade is C \n");
      printf("Fair performance. Lets aim higher next time—you have got the potential! \n");
      break;

    case 6:
      printf("your Grade is D \n");
      printf("Needs improvement. Put in more effort, and you will see better results! \n");
      break;

    case 7:
      printf("your Grade is E \n");
      printf("A borderline score. A bit bad but, Do not be discouraged; work even harder to pass comfortably! \n");
      break;  
         
    default:
      printf("your Grade is F \n");
      printf("Failed. Its a tough spot, but do not give up. Learn from this and try again with determination to not to fail again! \n");
      break;

    return 0;
}
}