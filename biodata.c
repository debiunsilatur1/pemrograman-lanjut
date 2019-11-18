#include <stdio.h>
#include <conio.h>
#include <string.h>


int main() 
{
	char nama[30], ttl[50], alamat[50], jk[10], status[20], jrs[30], fkl[30], kmp[50], knt[20];
	
	
	puts("=====================================MARI MENGISI BIODATA===========================================\n");
	
	printf("\tinputkan nama lengkap anda :");
	gets(nama);
	
	printf("\tinputkan tempat tanggal lahir anda :");
	gets(ttl);
	
	printf("\tinputkan alamat lengkap anda :");
	gets(alamat);
	
	printf("\tinputkan jenis kelamin anda :");
	gets(jk);
	
	printf("\tinputkan status anda :");
	gets(status);
	
	printf("\tinputkan jurusan anda :");
	gets(jrs);
	
	printf("\tinputkan fakultas anda :");
	gets(fkl);
	
	printf("\tinputkan nama kampus anda :");
	gets(kmp);
	
	printf("\tinputkan kontak anda :");
	gets(knt);
	printf("=================================BIODATAKU====================================\n");
	
	printf("NAMA                 : %s\n",nama);
	printf("TEMPAT TANGGAL LAHIR : %s\n",ttl);
	printf("ALAMAT               : %s\n",alamat);
	printf("JENIS KELAMIN        : %s\n",jk);
	printf("STATUS PEKERJAAN     : %s\n",status);
	printf("PROGRAM STUDI        : %s\n",jrs);
	printf("FAKULTAS             : %s\n",fkl);
	printf("NAMA KAMPUS          : %s\n",kmp);
	printf("KONTAK               : %s\n",knt);
	
	
	return 0;
}
