#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int x, y, ulang=1, pilihan;
	int i,j;
	int arr[9] = {6,1,9,2,5,4,7,8,3};
	int n = sizeof(arr)/sizeof(arr[0]); 
	
	printf("\nAngka = ");	
	for	(i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	while(ulang==1){
		printf("\n1. Ascending");
		printf("\n2. Descending");
		printf("\n0. Exit");
		printf("\nMasukkan Pilihan Anda = ");
		scanf("%d",& pilihan);
		switch (pilihan){
			case 1:{  
				for(i=0; i<n-1; i++){		
					for(j=0; j<n-1; j++){
						//(+)
						if(arr[j+1]<arr[j]){	
							int temp=arr[j];	
							arr[j]=arr[j+1];
							arr[j+1]=temp;	
						}
					}
				}
				printf("\nAngka = ");		
				for	(i=0; i<n; i++){
					printf("%d\t", arr[i]);
				}
				break;
			}
			case 2:{ 
				for(i=0; i<n-1; i++){
					for(j=0; j<n-1; j++){
						
						if(arr[j+1]>arr[j]){
						
							int temp=arr[j];
						
							arr[j]=arr[j+1];
							
							arr[j+1]=temp;
						}
					}
				}
				printf("\nAngka = ");		
				for	(i=0; i<9; i++){
					printf("%d\t", arr[i]);
				}
				break;
			}
			//perbedaan Ascending dan Descending hanya terdapat pada tanda > dan < saja. lihat pada tanda (+) cek perbedaan if nya.
			case 0:
				ulang=0;
				break;
		}
	}
	return 0;
}

