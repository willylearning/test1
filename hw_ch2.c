#include <stdio.h>
//#include <stdint.h>

int main(void)
{
    float loan; 
    float rate;
    float payment;
    float balance;
    char *str;
    int i;
    scanf("%f",&loan); //"&":the address of a
    scanf("%f",&rate);
    scanf("%f",&payment);

    for(i=0;i<3;i++)
    {
        balance=loan*(1+rate/1200)-payment;

        if (i==0)
            str="first";
        else if (i==1)
            str="second";
        else
            str = "third";
        printf("Balance remaining after %s payment: $%.2f\n", str, balance);

        loan=balance;
    }
    
    return 0;
}

