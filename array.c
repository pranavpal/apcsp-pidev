#include <stdio.h>

int arrayAdd(int* arr, int s, int n)
{
  for (int i = 0; i < s; i++)
    {
	arr[i] = arr[i] + n; 
	printf("%d\n", arr[i]);
    }
}

int main()
{
  int arr[100];
  for (int i = 0; i < 100; i++)
    {
	arr[i] = i * i;
    }
  printf("Printing index 14 and 19: index 14: %d, index 19: %d\n", arr[14], arr[19]);
  arrayAdd(arr,100,14);
     return 0;
}
