#include <stdio.h>
#include <stdlib.h>

#define Length 10

int* push(int* p, int elem)
{
	*p = elem;
	p -= 1;
	return p;
}

int* pop(int* p)
{
	int* temp;
	temp = p+1;
	*temp = 0;
	p += 1;
	return p;
}
void output(int* p)
{
	for(int i=0;i<Length;i++)
	{
		printf("%d\n",p[i]);		
	}
}
int main()
{
	int* p = (int*)malloc(sizeof(int)*Length);
	int* temp = p;
	for(int i=0;i<Length;i++)
	{
		p[i] = 0;		
	}
	
	p = &p[9];
	
	p = push(p,1);
	p = push(p,2);
	p = push(p,3);
	p = push(p,4);
	
	p = pop(p);
	p = pop(p);
	
	
	output(temp);
	return 0;	
				
}
