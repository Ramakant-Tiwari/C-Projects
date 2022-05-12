#include<stdio.h>
int main() 
{
    int alphabet = 65;
    // to print * in y-direction
    for (int y_axis = 5; y_axis >= 1; y_axis--)
    {
    // to print * in x-direction
    for(int x_axis = 1; x_axis <= y_axis; x_axis++)
    {
        printf("%c", alphabet);
        alphabet++;
    }
    printf("\n");   
    }

    return 0;
}