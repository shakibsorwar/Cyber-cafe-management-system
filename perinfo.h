void perinfo (struct user l )
{
    FILE *log;
    log=fopen("login12.txt","r");

     struct user l;

    printf("Full name :%s %s ",l.firstname,l.lastname);
}
