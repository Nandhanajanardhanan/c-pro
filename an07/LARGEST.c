#include<stdio.h>
int main(){
	int n,max=0;
	printf("Enter the no. of Elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int t;
		scanf("%d",&t);
		if(max<t){
			max=t;
		}
	}
	printf("Largest Element = %d\n",max);
	return 0;
}
		
