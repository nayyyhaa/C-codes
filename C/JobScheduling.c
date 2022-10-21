#include <stdio.h>

// selectionSort to sort array according to profit.
void selectionSort(int jobs[], int profits[], int deadlines[], int n)
{

    for (int o = 0; o < n; o++)
    {
        int max = o;
        for (int i = o; i < n; i++)
        {
            if (profits[i] > profits[max])
            {
                max = i;
            }
        }

        int temp = profits[o];
        profits[o] = profits[max];
        profits[max] = temp;

        int temp2 = jobs[o];
        jobs[o] = jobs[max];
        jobs[max] = temp2;

        int temp3 = deadlines[o];
        deadlines[o] = deadlines[max];
        deadlines[max] = temp3;
    }
}

// This function will print array.
void printArray(int arr[], int n, char *str)
{
    printf("\n%s -", str);
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
}

// Job scheduling Algorithm.
void shedule(int job_sequence[], int jobs[], int profits[], int deadlines[], int net_profit[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (net_profit[deadlines[i]] == 0)
        {
            net_profit[deadlines[i]] = profits[i];
            job_sequence[deadlines[i]] = jobs[i];
        }
        else
        {
            for (int j = deadlines[j]; j > 0; j--)
            {
                if (net_profit[j] == 0)
                {
                    net_profit[j] = profits[i];
                    job_sequence[j] = jobs[i];
                    break;
                }
            }
        }
    }

    printArray(job_sequence, n, "\nJob shedule");

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + net_profit[i];
    }

    printf("\nNet profit - %d", sum);
}

int main()
{
    int jobs[] = {1, 2, 3, 4, 5, 6};
    int profits[] = {15, 10, 12, 20, 8, 5};
    int deadlines[] = {5, 3, 3, 2, 4, 2};
    int n = 6;

    selectionSort(jobs, profits, deadlines, n);

    printArray(jobs, n, "Jobs\t");
    printArray(profits, n, "Profits\t");
    printArray(deadlines, n, "Deadline");

    int net_profit[6] = {};
    int job_sequence[6] = {};

    shedule(job_sequence, jobs, profits, deadlines, net_profit, 6);

    return 0;
}
