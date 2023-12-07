#include <stdio.h>
#include <limits.h>
#define NUMBER 5

int main(void) {

    int array[NUMBER];
    int i, max, min, index;
    max = 0;
    index = 0;
    
    //최대 값
    for(i = 0; i < NUMBER; i++) 
    {
        scanf("%d", &array[i]);

        if(max < array[i])
        {

            max = array[i];
            index = i;

        }
    }

    //최소 값
    min = INT_MAX;
    for(i = 0; i < NUMBER; i++) 
    {
        scanf("%d", &array[i]);

        if(min > array[i]){

            min = array[i];
            index = i;
            
        }
    }

    return 0;

}