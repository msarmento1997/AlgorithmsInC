#include <stdio.h>

void sequentialSearch(int arr[], int arr_size,int value)
{
	int i;

	for(i=0;i<arr_size;i++)
	{
		if(arr[i]==value)
		{
			printf("\nIndex of array is %d for value %d\n",i,value);
			break;
		}
		else
		{
			continue;
		}


	}
	



}




void printArray(int arr[],int arr_size)
{
	int i;

	for(i=0;i<arr_size;i++)
		printf("%d ",arr[i]);

	printf("\n");

}

int main(void)
{
	int arr[]={12,10,9,16,14,2,5,7,4};


	int arr_size=sizeof(arr)/sizeof(arr[0]);

	int value = 16;
	printArray(arr,arr_size);


	sequentialSearch(arr,arr_size,value);
}