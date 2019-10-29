//Simple bubble sort algorithm to get started with sorting
//This sorts a vector into an ascending order

#include <stdio.h>

int main() {

    int list[12] = {7, 8, 2, 14, 54, 3, 6, 1, 0, -10, 156, 212};
    int swap, list_size=12;
    int flag=1;

    printf("BEFORE SORTING\n");
    for(int i=0;i<list_size;i++)
    {
        printf("int[%d] = %d\n", i, list[i]);
    }

    while(flag)
    {
        flag = 0;
        for(int i=1;i<list_size;i++)
        {
            //if you want to sort it in a descending order you can just swap the comparator from this '<' to this '>'
            if(list[i]<list[i-1])
            {
                flag = 1;
                swap = list[i];
                list[i] = list[i-1];
                list[i-1] = swap;
            }
        }
    }
    
    printf("\nAFTER SORTING\n");
    for(int i=0;i<list_size;i++)
    {
        printf("int[%d] = %d\n", i, list[i]);
    }

    return 0;
}
