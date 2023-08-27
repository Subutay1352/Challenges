#include <stdio.h>

#define FIVE (5)

void print1() {
    static int x = 100;
    printf("%d\n",x++);
}
void print2() {
    int x = 100;
    printf("%d\n",x++);
}

int main() {
    for (size_t i = 0; i < FIVE; i++)
    {
        print1();
    }
    
    
    for (size_t i = 0; i < FIVE; i++)
    {
        print2();
    }
    
}