#include <stdio.h>
int main()
{
	int a[8] = {48,62,35,77,55,14,35,98};
	int temp = 0;
	int i=0,j=0;
	for(i=1;i< 8;i++)
	{
		j=i;
		temp = a[j];
		for(;j!=-1;j--)
		{
			if(a[j-1]<=temp)
			{
				a[j] = temp;
				break;
			}
			a[j]=a[j-1];
		}
	}
	for(i=0;i<8;i++)
		printf("%d ",a[i]);
	return 0;
}
