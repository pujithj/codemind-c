#include <stdio.h>

int main() 
    {    
    int array[100], minimum, size, c, location = 1;
    
    scanf("%d",&size);
    
    
    
    for ( c = 0 ; c < size ; c++ )
        scanf("%d", &array[c]);    
    
    minimum = array[0];
    
    for ( c = 1 ; c < size ; c++ ) 
    {
        if ( array[c] < minimum ) 
        {
            minimum = array[c];
            location = c+1;
        }
    } 
    
    printf("%d",minimum);
    return 0;
}