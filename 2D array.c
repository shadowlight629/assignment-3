// 2 D array
#include<stdio.h>
int main(){
	int i,j;
	int marks[2][3]={{50,60,70},{50,60,70}};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
	}
	}
	return 0;
}