#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Using selection sort to sort activities according to their finish time.
void selectionSort(char *activities[], int start_time[], int finish_time[], int n)
{

    for (int o = 0; o < n; o++)
    {
        int max = o;
        for (int i = o; i < n; i++)
        {
            if (finish_time[i] < finish_time[max])
            {
                max = i;
            }
        }

        int temp = finish_time[o];
        finish_time[o] = finish_time[max];
        finish_time[max] = temp;

        char *temp2 = activities[o];
        activities[o] = activities[max];
        activities[max] = temp2;

        int temp3 = start_time[o];
        start_time[o] = start_time[max];
        start_time[max] = temp3;
    }
}

// This will print entire array.
void printArray(int arr[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
}

// This will print array that contains strings.
void printStringArray(char *arr[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("\t%s", arr[i]);
    }
}

// Activity selection algorithm.
void activitySelection(char *activities[], int start_time[], int finish_time[], int n)
{
    printf("\n\nSequence of activity are : %s ", activities[0]);
    for (int i = 1; i < n; i++)
    {
        if (finish_time[i - 1] <= start_time[i])
        {
            printf("%s ", activities[i]);
        }
    }
}

int main()
{
    printf("\nName - Shubhankar Nautiyal\nSap id - 1000014085\n\n");

    // Sample activities.
    char *activities[] = {"A1", "A2", "A3", "A4", "A5", "A6", "A7", "A8", "A9", "A10", "A11"};
    int start_time[] = {2, 4, 3, 1, 5, 8, 8, 6, 11, 13, 14};
    int finish_time[] = {3, 5, 7, 6, 10, 9, 11, 13, 12, 14, 16};
    int n = 11;

    printf("Activities - ");
    printStringArray(activities, n);
    printArray(start_time, n);
    printArray(finish_time, n);

    selectionSort(activities, start_time, finish_time, n);

    activitySelection(activities, start_time, finish_time, n);

    return 0;
}
