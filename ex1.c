#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int main() {
    int n = (int) pthread_self();
    int temp = fork();
    if (temp == 0) {
        printf("Hello from child [%d - %d]\n", temp, n);
    } else if (temp > 0) {
        printf("Hello from parent [%d - %d]\n", temp, n);
    } else {
        printf("Error");
    }
}
