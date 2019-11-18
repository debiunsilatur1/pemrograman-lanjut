#include <stdio.h>


int angka[10]={2,8,9,6,3,1,5,17,10,77};	//inisialisasi data

void main(){
	//looping sebanyak jumlah data-1
	int i,j;
	for(i=1; i<10; i++){
		//looping selama angka ke-j (j sudah di set sebagai i di awal)
		//lebih kecil dari j-1
		for(j=i; j>0 && angka[j]<angka[j-1]; j--){
			//lakukan swap value
			int temp=angka[j-1];
			angka[j-1]=angka[j];
			angka[j]=temp;
		}
	}
	for(i=0; i<10; i++){	//cetak data
		printf("%d ", angka[i]);
	}
	getchar();
}
