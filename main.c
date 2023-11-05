#include <stdio.h>
#include <dos.h>
#include "splash.h"
#include "login.h"
#include "menu.h"
#include "member.h"


int main (void)
{
    splash();
    sleep(4);
    system("cls");

    Home_screen();

}
