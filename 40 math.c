#include<stdio.h>
int main()
{
    double loan_amount,interesst_rate,time_year,total_amount,mothly_paid,per_day;
    printf("Loan amount:");
    scanf("%lf",&loan_amount);
    printf("Interesst_Rate:");
    scanf("%lf",&interesst_rate);
    printf("Time_Year:");
    scanf("%lf",&time_year);

    total_amount=loan_amount+((loan_amount*interesst_rate)/100);
    mothly_paid=total_amount/(time_year*12);
    per_day= mothly_paid/30;
    printf("total_amount=%0.2lf\n",total_amount);
    printf("mothly_paid=%0.2lf\n",mothly_paid);
    printf("per_day=%0.2lf\n",per_day);
    return 0;

}
