
#include <stdio.h>
int main(){

int num1,num2 ;
int add,sub,mult,div;
printf("Input any two numbers separated by comma ");
scanf("%d,%d",&num1,&num2);

add = num1 + num2;
sub = num1 - num2;
mult = num1 * num2;
div = num1 / num2;

/*prints the result of all arithmetic operations */

printf("The add of the given number : %d\n",add);
printf("The subtraction of the given number : %d\n",sub);
printf("The multiplication of the given number : %d\n",mult);
printf("The division of the given number : %d\n",div);

return 0;
}
