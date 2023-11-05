float topup (float balance)
{
    float deposit;
    printf("\t\t\t\tyour current balance is %.2ftk\n\n",balance);

    printf("\t\t\t\t\tEnter top up amount :");
    scanf("%f",&deposit);
    balance += deposit;

    printf("\n\t\t\t\t\t new balance is %.2f tk ",balance);
    return balance;
}
