#include<stdio.h>
int main(){
	int n,m,sum=0;
	printf("nhap so hang n: ");
	scanf("%d",&n);
	printf("nhap so cot m: ");
	scanf("%d",&m) ;	
	int array[n][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("nhap array[%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("cac phan tu trong mang la: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
    for (int j=0; j< n;j++){
        sum += array[0][j];
    }
    for (int j= 0;j<n;j++){
        sum += array[m-1][j];
    }
    for (int i=1; i<m-1;i++){
        sum += array[i][0];
    }
    for (int i=1; i<m-1;i++){
        sum += array[i][n-1];
    }
	    printf("tong duong bien cua mang la: %d\n",sum);
	return 0;
}
