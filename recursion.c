

#include <stdio.h>


int increase (int value, int limit){
    if (value == limit){
        printf ("%d ", value); 
       
    } else{
        printf("%d ", value); 
        increase (value + 1, limit); 
    }
}

int main()
{
    int x, y; 
    printf ("Insert the last value: "); 
    scanf ("%d", &y); 
    
    printf("Insert the first value: "); 
    scanf ("%d", &x); 

    int res = increase (x, y); 
}


