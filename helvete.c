#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bin/archives.h"
#define ANSII_COLOR_RED "\033[1;31m"
#define RESET_COLOR "\033[0;0m"
#define ANSII_COLOR_D "\033[1;42m"
#define ANSII_COLOR_PURPLE "\033[1;35m"
#define ANSII_COLOR_CYAN "\033[1;36m"
#define ANSII_COLOR_BLUE "\033[1;34m"
#define ANSII_COLOR_GREEN "\033[1;32m"
void userLogin()
{
for(;;)
{
    static char userLogin[512];
    static char userPassword[1024];
    printf("Helvete - 1.2 Microkernel Stable!\n\n");
    printf("Login: ");
    scanf("%s", &userLogin);
    printf("Password: ");
    scanf("%s", &userPassword);
    if (strcmp(userLogin, "0") == 0 && strcmp(userPassword, "0") == 0)
    {
        printf("\nLogado com ");
        printf(ANSII_COLOR_GREEN"sucesso\n\n" RESET_COLOR);
        printf(ANSII_COLOR_RED "Helvete " RESET_COLOR);
        printf("- Version 1.2\n");
        break;
    }
    else
    {
        printf(ANSII_COLOR_RED"Login Invalido!\n" RESET_COLOR);
        sleep(1);
        system("clear");
    }
}
}
void userShell()
{
    
}
int main()
{
    system("clear");
    userLogin();
for(;;)
{
    static char userShell[512];
    static char melissedestroyer[512];
    printf(ANSII_COLOR_RED"└─> " RESET_COLOR);
    scanf("%s", userShell);
    if (strcmp(userShell,"exit") == 0)
    {
        system("clear");
        exit(EXIT_SUCCESS);
    }
    if (strcmp(userShell,"beastware.alastor") == 0)
    {
        archives();
    }
    if (strcmp(userShell,"system.shell") == 0)
    {
        system("sh");
    }
    if (strcmp(userShell,"clear") == 0)
    {
        system("clear");
        printf(ANSII_COLOR_RED "Helvete " RESET_COLOR);
        printf("- Version 1.2\n");
    }
    if (strcmp(userShell,"doc") == 0)
    {
        printf("strawberry is a meta-virus, it is in shell style, typing 'help.me' you can see all the viruses it contains, both viruses that steal user information and viruses that destroy the computer, regardless of the system operational.\n");
    }
    if (strcmp(userShell,"listdir") == 0)
    {
        printf(ANSII_COLOR_CYAN"Directories:\n" RESET_COLOR);
        printf(ANSII_COLOR_BLUE"beastware.alastor (offline).\nmelisse.alastor (offline).\nalastor.alastor (offline).\n" RESET_COLOR);
    }
    if (strcmp(userShell,"doc-ptbr") == 0)
    {
        printf(ANSII_COLOR_RED"Helvete"RESET_COLOR);
        printf(" é um meta-vírus, está em estilo shell, digitando help.me você pode ver todos os vírus que ele contém, tanto vírus que roubam informações do usuário quanto vírus que destroem o computador, independente do sistema operacional.\n");
        printf(ANSII_COLOR_RED"beastware" RESET_COLOR);
        printf(" está presente, e é um virus que rouba todos os arquivos da pasta /home/user e faz um clone para um disco removivel em /mnt/melisse.\n");
        printf(ANSII_COLOR_RED"melisse" RESET_COLOR);
        printf(" está presente, e é um virus que destrói a partição /, e /etc/passwd, assim impedindo que o usuario faça qualquer coisa, e logo em seguida corrompe o kernel e /boot\n");
        printf(ANSII_COLOR_RED"alastor" RESET_COLOR);
        printf(" está presente, e é um programa/virus de D.D.O.S que faz ataque para derrubar qualquer site sem proteção adequada\n");
    }
    if (strcmp(userShell,"about") == 0)
    {
        printf("Strawberry foi escrito em: \n");
        printf(ANSII_COLOR_PURPLE"C "RESET_COLOR);
        printf("- A Base do microkernel foi completamente escrito em C\n");
        printf(ANSII_COLOR_CYAN"LUA "RESET_COLOR);
        printf("- Alguns Pouquissimos Scripts Foram Escritos Em Lua\n");
        printf(ANSII_COLOR_RED"RUBY " RESET_COLOR);
        printf("- Alguns Outros Scripts Foram Escritos Em Ruby\n");
    }
    if (strcmp(userShell,"force_update") == 0)
    {
        system("git clone https://github.com/john-32bit/helvete");
        system("sudo rm -r /bin/helvete");
        system("chmod +x ~/helvete/helvete && sudo cp ~/helvete/helvete /bin");
    }
    if (strcmp(userShell,"restart") == 0)
    {
        system("clear");
        system("helvete");
    }
    if (strcmp(userShell,"melisse.alastor") == 0)
    {
        printf("Você Tem Certeza Disso?");
        printf("\nse sim digite: Destroy\n\n");
        printf("> ");
        scanf("%s", &melissedestroyer);
        if (strcmp(melissedestroyer,"Destroy") == 0)
        {
            system("clear");
            printf("não jkkkkk\n");
            sleep(2);
        }
        else
        {
            system("clear");
        }
    }
}
}