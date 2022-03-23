#include<stdio.h>
int sum(int num)
{
	int i;
	int sum =0;
	for(i=1; i<=num; ++i){
		sum += i;
	}
	return sum;
}
int main(){

	int num =0;
	int result =0;
	printf("Enter number ");
	scanf("%d", &num);
	result = sum(num);
	printf("sum : %d ",result);
	return 0;
}
