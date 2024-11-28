#include<stdio.h>

int main(){
	int n;
	printf("Nhap so nguyen n:");
	scanf("%d",&n);
	
	int arr[n][n];
	printf("Nhap phan tu cua ma tran:\n");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("Phan tu [%d][%d] la:",i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Ma tran cua ban la:\n");
    for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%2d",arr[i][j]);
		}
		printf("\n");
    }
	return 0;
}
