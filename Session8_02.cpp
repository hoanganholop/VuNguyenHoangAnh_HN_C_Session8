#include<stdio.h>

int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{6,7,8}};
	int n;
	int have=0;
	printf("Nhap vao mot phan tu:");
	scanf("%d", &n);
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(arr[i][j]==n){
				printf("Vi tri phan tu trong mang la: %d %d",i,j);
				have=1;
			}
		}
	}
	if(!have){
		printf("Phan tu khong ton tai trong mang");
	}
	return 0;
}
