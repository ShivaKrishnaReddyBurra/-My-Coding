#include<stdio.h>
void foo(),f();
int main ()
{
    f();
    return 0;
}
void foo()
{
    printf("2 ");
}
void f()
{
    printf("1 ");
    foo();

}
