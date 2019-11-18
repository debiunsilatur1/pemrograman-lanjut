#include <stdio.h>
#include <stdlib.h>

int main (){
	int data[9]={2,3,5,6,12,44,56,65,73,81};
	int awal;
	int tengah;
	int akhir;
	int cari;
	int i;
	
	int ketemu=0;
	awal=0;
	akhir=9;
	
	printf ("masukkan angka yang ingin anda cari: ");
	scanf ("%d",&cari);
	
	for(i=0;i<9;i++){
		tengah=(awal+akhir)/2;
		if (data[tengah]<cari){
			awal = tengah+1;
		}
		else if (data[tengah]==cari){
			ketemu=1;	
		}
		else{
			akhir=tengah-1;
		}
	}
	if (ketemu == 1){
		printf("data %d ada dalam array ke %d",cari, akhir);
	}
	else {
		printf ("data %d tidak ada dalam array ",cari);
	}
	return 0;
}
