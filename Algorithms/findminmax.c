//Find min and max value in an array

#include <stdio.h>

void find_min_max(int arr[],int size)
{
	int min,max;
	int temp;

	min = arr[0];
	max = arr[1];

	if(min>max)
	{
		temp=min;
		min=max;
		max=min;
	}

	for(int i=2;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}else
		{
			continue;
		}


	}

	printf("\nThe minimum value in the array is %d and the maximum value in the array is %d\n",min,max);



}






int main(void)
{
	int arr[]={14,17,9,2,5,19,21,6,7,1};


	int arr_size=sizeof(arr)/sizeof(arr[0]);	

	find_min_max(arr,arr_size);

	return 0;

}