#include<stdio.h>
void main() 
{
    // to print * in y-direction
    for (int y_axis = 5; y_axis >= 1; y_axis--)
    {
    // to print * in x-direction
    for(int x_axis = 0; x_axis <= y_axis; x_axis++)
    {
        printf("*");
    }
    printf("\n");   
    }
    
}