#include <stdio.h>

int main(void)
{
	int value1, value2, value3;
	
	scanf("%d %d %d", &value1, &value2, &value3);
	
	if((value1 < value2) && (value2 < value3)) 
    {
		printf("%d\n%d\n%d\n\n", value1, value2, value3);
	} 
    else if((value1 < value3) && (value3 < value2)) 
    {
		printf("%d\n%d\n%d\n\n", value1, value3, value2);
	} 
    else if(value2 < value1 && value1 < value3) 
    {
		printf("%d\n%d\n%d\n\n", value2, value1, value3);
	} 
    else if(value2 < value3 && value2 < value1) 
    {
		printf("%d\n%d\n%d\n\n", value2, value3, value1);
	} 
    else if(value3 < value1 && value1 < value2) 
    {
		printf("%d\n%d\n%d\n\n", value3, value1, value2);
	} 
    else if(value3 < value2 && value2 < value1) 
    {
		printf("%d\n%d\n%d\n\n", value3, value2, value1);
	}
	
	printf("%d\n%d\n%d\n", value1, value2, value3);
	
	return 0;
}