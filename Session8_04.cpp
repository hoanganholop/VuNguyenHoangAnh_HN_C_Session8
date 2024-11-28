#include<stdio.h>
int main(){
	
	int arr[3][3];
	for(int i=0; i<3; i++){
		for(int j=0;j<3; j++){
			printf("Nhap phan tu [%d][%d] :",i ,j);
			scanf("%d", &arr[i][j]);
		}
	}
	int max=0;
	for(int i=0; i<3; i++){
		for(int j=0;j<3; j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			}
		}
	}
	printf("Phan tu lon nhat trong mang la: %d", max);
	return 0;
}
