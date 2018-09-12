#include <stdio.h>
#include <stdlib.h>
void input(char * p)
{
    //scanf("%s",p);
    fgets(p, 256, stdin);
}
int main() {
    while(1)
    {
        char line[256];
        input(line);
        if(line[0] == 'q')
            break;
        system(line);
    }


}
