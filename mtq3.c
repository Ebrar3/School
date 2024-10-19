#include <stdio.h>

void my_sort(int a[], int low, int high);
int divide(int a[], int low, int high);


int main()
{
    int size;

    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    my_sort(a, 0, size - 1);


    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}



int divide(int a[], int low, int high)
{
    int mid_element = a[low];
    int left = low + 1, right = high;

    while (left <= right)
    {
        while (left <= right && a[left] <= mid_element)
        {
            left++;
        }

        while (left <= right && a[right] > mid_element)
        {
            right--;
        }

        if (left < right)
        {
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
        }
    }

    a[low] = a[right];
    a[right] = mid_element;

    return right;
}



void my_sort(int a[], int low, int high)
{
    int middle;

    if (low >= high)
    {
        return;
    }

    middle = divide(a, low, high);
    my_sort(a, low, middle - 1);
    my_sort(a, middle + 1, high);
}