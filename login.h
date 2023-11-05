struct user {

char firstname[100];
char lastname[100];
char username[20];
char password[20];
};
void Home_screen(void)//login menu
{
    int ch;

    printf("\n\t\t\t\t\tHome Screen");

    printf("\n\n\n\t\t\t\t\t1.sign up :\n\n\t\t\t\t\t2.log in :\n\n\t\t\t\t\t3.exit");
    printf("\n\n\t\t\t\t\tEnter your choice:");
    scanf("%d",&ch);

    if(ch==1)
    {
        system("CLS");
        signup();
    }
    else if (ch==2)
    {
        system("CLS");
        login();
    }
    else if (ch==3)
    {
        system("CLS");
        printf("\n\n\t\t\t\t---------The programe is closing--------- \n\n\t\t\t\t-------- Thank you for visiting-------");
        sleep(2);
        system("CLS");
    }
    else
    {

        system("cls");
        printf("\n\t\t\t\t-------Invalid input given--------\n\n\t\t\t\t-------Please try again-------");
        sleep(2);
        system("ClS");
        Home_screen();
    }


}
void signup (void)//function which is needed for register a username & password
{
  FILE *cyber;
  cyber=fopen("cafe.txt","w");

  struct user l;

  printf("\t\t\t\t\tEnter first name: ");
  scanf("%s",l.firstname);

  printf("\t\t\t\t\tEnter last name: ");
  scanf("%s",l.lastname);

  printf("\t\t\t\t\tEnter  an username: ");
  scanf("%s",l.username);

  printf("\t\t\t\t\tEnter a password: ");
  scanf("%s",l.password);

  fwrite(&l,sizeof(l),1,cyber);

  fclose(cyber);

  printf("\n\n\t\t\t\t\t You signed up successfully\n");
  printf("\n\t\t\t\t\tpress any key to go to login ");
  getch();
  system("CLS");
  login();
}

login()//funtion that take username & password & finally chechks it
{
    char username[20],password[20];
    FILE*cyber;            //file pointer
    cyber=fopen("cafe.txt","r");

    struct user l;
    printf("\n\n\t\t\t\t\tLog in screen");

    printf("\n\n\t\t\t\t\tEnter username: ");
    scanf("%s",&username);

    printf("\n\n\t\t\t\t\tEnter password: ");
    scanf("%s",&password);

    while(fread(&l,sizeof(l),1,cyber))
    {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
        {
            system("cls");
            printf("\n\n\n\t\t\t\t-----------login successful------------\n");
            sleep(1);
            system("CLS");
            menu();
        }
        else
        {
            system("cls");
            printf("\n\n\n\t\t\t\t\tlog in failed\n\n\t\t\t\t\tPlease enter correct username and password");
            sleep(2);
            system("CLS");
            login();
        }

    }

    fclose(cyber);
}


