/* BankInterest.c to compute and display interest on bank account */

#include <stdio.h>

int main(void)
{
  int period;
  double amount, int_rate, interest;

  /* get the input: amount, int_rate, period */
  printf("Enter the principal amount deposited (in $): ");
  scanf("%lf", &amount);
  printf("Enter the basic annual interest rate (in %%): ");
  scanf("%lf", &int_rate);
  printf("Enter the deposit period (in months): ");
  scanf("%d", &period);

  if (period>=15 && period<24)
     int_rate=int_rate+(1.00/100.00);
  else if (period>=24)
     int_rate=int_rate+(1.25/100.00);

  //Other way to do it
  //if (period<15)
  //else if (period<24
  //else

  /* compute the interest */
  interest = amount*(int_rate/100.0)*(period/12.0);

  /* output the result */
  printf("\nThe interest rate is $%.3f\n\n", int_rate);
  printf("The interest due is $%.2f\n\n", interest);

  return 0;
}
