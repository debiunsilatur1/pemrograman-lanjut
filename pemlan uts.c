#include <stdio.h>
#include <stdlib.h>


	struct kontainer {
	
		int ukuran[10];
		int berat[10];
		char vendor[30];
		char jenisMuatan[30];	
	};
	
	main() {
		
		
		int i, n;
		struct kontainer ktr[8];
		
		ktr[0].ukuran[0]=20;
		ktr[0].berat[0]=100;
		strcpy (ktr[0].vendor,"meratus");
		strcpy (ktr[0].jenisMuatan,"electronics");
		
		ktr[1].ukuran[1]=40;
		ktr[1].berat[1]=150;
		strcpy (ktr[1].vendor,"mearsk");
		strcpy (ktr[1].jenisMuatan,"electronics");
		
		ktr[2].ukuran[2]=20;
		ktr[2].berat[2]=100;
		strcpy (ktr[2].vendor,"meratus");
		strcpy (ktr[2].jenisMuatan,"goods");
		
		ktr[3].ukuran[3]=60;
		ktr[3].berat[3]=200;
		strcpy (ktr[3].vendor,"meratus");
		strcpy (ktr[3].jenisMuatan,"goods");
		
		ktr[4].ukuran[4]=20;
		ktr[4].berat[4]=100;
		strcpy (ktr[4].vendor,"mearsk");
		strcpy (ktr[4].jenisMuatan,"chemical");
		
		ktr[5].ukuran[5]=60;
		ktr[5].berat[5]=200;
		strcpy (ktr[5].vendor,"pelni logistics");
		strcpy (ktr[5].jenisMuatan,"electronics");
		
		ktr[6].ukuran[6]=40;
		ktr[6].berat[6]=150;
		strcpy (ktr[6].vendor,"mearsk");
		strcpy (ktr[6].jenisMuatan,"chemical");
		
		ktr[7].ukuran[7]=40;
		ktr[7].berat[7]=150;
		strcpy (ktr[7].vendor,"pelni logistics");
		strcpy (ktr[7].jenisMuatan,"electronics");
				
		
		
		printf("\tData Kontainer\n");
		
		for (i=0; i<8; i++){
			printf("\t\ndata kontainer ke- %d\n", i+1);
			printf("ukuran		: %d\n", ktr[i].ukuran[i]);
			printf("berat		: %d\n", ktr[i].berat[i]);	
			printf("vendor		: %s\n", ktr[i].vendor);
			printf("jenis muatan	: %s\n", ktr[i].jenisMuatan);
			
			
		}
		
	}
		


	
	
	
