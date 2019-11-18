#include <stdio.h>


int angka[10]={2,8,9,6,3,1,5,17,10,77};	//inisialisasi data

void main(){
	//looping sebanyak jumlah data
	int i,j;
	for(i=0; i<10; i++){
	
		int indexNilaiMinimal=i;	//anggap saja bahwa index ke i adalah angka terkecil
		//looping untuk mencari index/posisi angka yang terkecil	//caranya adalah membandingkan angka satu per satu
		
		for(j=i; j<10; j++){	//jika ada yang lebih kecil dari angka index ke indexNilaiMinimal
			if(angka[j]<angka[indexNilaiMinimal]){	//maka, ganti indexNilaiMinimal menjadi index angka tersebut
				indexNilaiMinimal=j;
			}
		}
		//swap value (tukar)
		int temp=angka[i];
		angka[i]=angka[indexNilaiMinimal];
		angka[indexNilaiMinimal]=temp;
	}
	//cetak data
	for(i=0; i<10; i++){
		printf("%d ", angka[i]);
	}
	getchar();
}
