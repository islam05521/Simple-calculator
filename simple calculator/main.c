#include <stdio.h>
#include <stdlib.h>

//fucntions

int function_multiplication(int a, int b )
{
    int c;
    c=a*b;
    return c;

}
int function_subtraction(int a, int b)
{
    int c;
    c=a-b;
    return c;

}
int function_addition(int a, int b)
{
    int c;
    c=a+b;
    return c;

}


int main() {
    int a,b,d;
    int c;


    printf("\n------------------------------------------- simple Calculator ------------------------------------------------");
    printf("\n--------------------------------------------------------------------------------------------------------------");

    /*ininity loop*/

for(;;)
{




    printf("\n\n Enter the first number:  ");
    scanf("%d",&a);
    printf("\n Enter the second number:  ");
    scanf("%d",&b);
    printf("\n -------------------------- Choose an operation( * , - , + ):  [*]:1, [-]:2, [+]:3 ---------------------------\n");

    do {
    printf("\n Operation No. : ");
    scanf("%d",&d);}
    while(d!=1 && d!=2 && d!=3);


    if (d==1){

        c=function_multiplication(a,b);
        printf("\n the result of this operation (%d * %d) is:  %d\n",a,b,c);}

        else if (d==2){
        c=function_subtraction(a,b);
        printf("\n the result of this operation (%d - %d) is:  %d\n",a,b,c);
        }
        else {
        c=function_addition(a,b);
        printf("\n the result of this operation (%d + %d) is:  %d\n",a,b,c);

        }

printf("\n--------------------------------------------------------------------------------------------------------------");
}





  return 0;
}
