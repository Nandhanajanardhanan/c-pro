#include<stdio.h>
int main(){
	int n,m;
	printf("Enter limit : ");
	scanf("%d",&n);
	int sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		sum+=m;
	}
	float avg;
	avg=(float)sum/n;
	printf("Average = %f\n",avg);
	return 0;
}
		
