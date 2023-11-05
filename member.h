struct member{
    int cn;
    char username[50];
    char time[50];
    int phonenumber;

}p;
FILE *mem;//file pointer named mem
void addmember(void)
{
    mem =fopen(".txt","ab");

    printf("\n\t\t\t\t\tEnter computer number:");
    scanf("%d",&p.cn);

    printf("\n\t\t\t\t\tEnter user name:");
    fflush(stdin);
    gets(p.username);

    printf("\n\t\t\t\t\tEnter time :");
    fflush(stdin);
    gets(p.time);

    printf("\n\t\t\t\t\tEnter phone number:");
    fflush(stdin);
    scanf("%d",&p.phonenumber);

    printf("\t\t\t\t\tMEMBER ADDED SUCCESSFULLY");
    printf("\n\t\t\t\t\tPlease wait for a few second");
    fwrite(&p,sizeof(p),1,mem);//to write
    fclose(mem);



}
void member (void){

    system("cls");
    printf("\t\t\t\t\t USER  List \n\n");
   printf("\tcomputer nm\tusername\ttime\tphonenumber");



    mem = fopen(".txt", "rb");
    while(fread(&p, sizeof(p), 1, mem) == 1){
        printf("\n\t%d\t\t %s \t\t%s \t\t%d\n \n", p.cn, p.username, p.time, p.phonenumber);
    }

    fclose(mem);
}
