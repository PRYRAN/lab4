#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void input(char * p)
{
    fgets(p, 256, stdin);
}
int main() {
    while(1)
    {
        char line[256];
        input(line);
        if(line[0] == 'q')
            break;
        int i = 0;
        while(line[i] != '\n')
        {
            if(line[i++] == '&')
            {
                int pid = fork();
                if(pid==0)
                {
                    system(line);
                    sleep(5);

                }
                return 0;
            }
        }
        system(line);
    }


}
