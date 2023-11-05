#include "ave.h"
void menu (void)
{


    int opt;

    while(opt!=0 && opt!=5)
    {

        printf("\t\t\t\t\t 1.available computers\n");
        printf("\t\t\t\t\t 2.booked computers \n");
        printf("\t\t\t\t\t 3.members list\n");
        printf("\t\t\t\t\t 4.add user\n");
        printf("\t\t\t\t\t 5.Exit\n");

        printf("\t\t\t\t\tChoose your options :");
        scanf("%d",&opt);




        switch(opt)
        {
        case 1 :
        {
            system("cls");
            available();
            break ;
        }
        case 2 :
        {
            system("cls");
            booked();
            break;
        }
        case 3 :
        {
            system("cls");
            member();

            break;
        }
        case 4 :
            {
                system("cls");
                addmember();
                break;

            }
        case 5 :
            {
                system("cls");
                printf("\t\t\t\t\tThank you for visiting");
                break;
            }


        }
        if (opt==5)
        {
            printf("\n \t\t\t\t\t double tap any key to exit");
        }
        else
        {
            printf("\n\n\t\t\t\tPress any key to go back to main menu\n\n");
            getch();

            system("cls");
        }
    }

}
