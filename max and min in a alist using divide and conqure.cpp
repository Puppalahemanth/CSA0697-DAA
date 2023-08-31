#include<stdio.h>
void findMaxAndMin(int arr[], int low, int high, int* max, int* min)
{
    if (low == high)
	 {
        *max = *min = arr[low];
     } 
	 else if (low == high - 1)
	  {
        if (arr[low] < arr[high]) 
		{
            *max = arr[high];
            *min = arr[low];
        }
		 else
		  {
            *max = arr[low];
            *min = arr[high];
          }
     }
	   else
	     {
           int mid = (low + high) / 2;
           int localMax1, localMin1, localMax2, localMin2;
           findMaxAndMin(arr, low, mid, &localMax1, &localMin1);
           findMaxAndMin(arr, mid + 1, high, &localMax2, &localMin2);
           *max = (localMax1 > localMax2) ? localMax1 : localMax2;
           *min = (localMin1 < localMin2) ? localMin1 : localMin2;
         }
}
int main()
{
    int arr[] = {5, 9, 3, 2, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    findMaxAndMin(arr, 0, size - 1, &max, &min);
    printf("Max value: %d\n", max);
    printf("Min value: %d\n", min);
    return 0;
}
