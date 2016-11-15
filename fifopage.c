#include<stdio.h>
int main()
{
	int i,j=0,k=0,l,array[50],arr[10],ele,f=0,size,c=0,x;
	printf("Enter number of pages : ");
	scanf("%d",&ele);
	printf("Enter %d elements\n",ele);
	for(i=0;i<ele;i++)
		scanf("%d",&array[i]);	
	printf("Enter frame size : ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
		arr[i]=-1;
	for(i=0;i<ele;i++)
	{
		for(x=0;x<size;x++)
		{
			if(arr[x]==array[i])
			c=1;
		}
		if(c==1)
			printf("No change\n");
		else
		{
			arr[j]=array[i];
			j=(j+1)%size;
			f++;
			for(l=0;l<size;l++)
				printf("%d\t",arr[l]);
			printf("\n");
		}
		c=0;
	}
	printf("Number of faults=%d\n",f);
	printf("Miss ratio=%d/%d\n",f,ele);
	printf("Hit ratio=%d/%d\n",ele-f,ele);
	return 0;
}

