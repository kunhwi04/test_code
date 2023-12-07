#include <stdio.h>
#define NUMBER 5

int main(void) {

    int array[NUMBER];
    int i, oddMax, evenMax;

    oddMax = 0;
    evenMax = 0;
    for (i = 0; i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if(array[i] % 2 == 0) //짝수
        {
            if(evenMax < array[i])
            {
                evenMax = array[i];
            }

        }
        else
        {
            if(oddMax < array[i]) //최대값을 구하는 것이기에 꺽쇠는 안바꿔도 된다
            {
                oddMax = array[i];
            }
        }
    }

    return 0;

}