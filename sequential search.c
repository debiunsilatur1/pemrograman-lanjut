#include <stdio.h>
#include <stdlib.h>

int main() {
	int nilai[8]={8,10,6,2,11,7,1,100};
	int i;
	int ketemu;
	int cari;
	
	printf("masukkan angka :");
	scanf("%d",&cari);
	i=0;
	ketemu=1;
	for(i=0; i<=8; i++){
		if (nilai[i]==cari){
			ketemu=1;
		}else{
			ketemu=0;
		}
	}
	if (ketemu==1){
		printf("data %d terdapat pada data",cari);
	}
	else{
		printf("data %d tidak ada",cari);
	}
	return 0;
}
*/

// binary search, data terurut, pencarian melalui pembagian data

/*int main(){
	int nilai[9]={3,9,11,12,15,17,23,31,35};
	int i,j;
	int cari;
	int ketemu;
	
	printf("masukkan angka :");
	scanf("%d",&cari);
	
	for (i=0;i<nilia-1;i++){
		for (j=0;j<nilai-1-i;j++)
	}
	if 
}
*/
// membuar binanry search biasa, dan menggunakan rekursif
