#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int i,j;
	int temp;
	int num[5];
	printf("輸入5個數排大小:\n");
	scanf(" %d %d %d %d %d", &num[0],&num[1],&num[2],&num[3],&num[4]);
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(num[j]<num[i]){
				temp=num[j];
				num[j]=num[i];
				num[i]=temp;
			}
		}
	}
	printf("\n\n");
	printf("最小值為:%d\n",num[0]);
	system("pause");
	return 0;
	
}
