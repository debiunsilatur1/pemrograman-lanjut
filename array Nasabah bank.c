#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct tgl_lahir {
		int tanggal;
		int bulan;
		int tahun;
};
struct alamat {
		char jalan[40];
		char kota[20];
		char provinsi[20];
};
struct nasabah {
		char no_rek[12];
		long int saldo;
		char nama[20];
		char bank[10];
		struct tgl_lahir tgl_lahir;
		int umur;
		struct alamat alamat;
};

int main() {
	struct nasabah nasabah[20];
	int cari,pilih;
	int i;
	int loop=1;
	strcpy (nasabah[0].nama,"Aan");
	strcpy (nasabah[0].bank, "Mandiri");
	nasabah[0].tgl_lahir.tanggal = 20;
	nasabah[0].tgl_lahir.bulan= 12;
	nasabah[0].tgl_lahir.tahun = 2001;
	strcpy (nasabah[0].alamat.kota,"Surabaya");
	strcpy (nasabah[0].alamat.provinsi,"Jawa Timur");
	strcpy (nasabah[0].alamat.jalan,"Jln.Mawar");
	strcpy (nasabah[0].no_rek,"10251100");
	nasabah[0].saldo = 2500000;
		
	strcpy (nasabah[1].nama,"Iin");
	strcpy (nasabah[1].bank, "BTN");
	nasabah[1].tgl_lahir.tanggal = 10;
	nasabah[1].tgl_lahir.bulan= 03;
	nasabah[1].tgl_lahir.tahun = 1999;
	strcpy (nasabah[1].alamat.kota,"Malang");
	strcpy (nasabah[1].alamat.provinsi,"Jawa Timur");
	strcpy (nasabah[1].alamat.jalan,"Jln.Bali");
	strcpy (nasabah[1].no_rek,"20040299");
	nasabah[1].saldo = 3500000;
	
	strcpy (nasabah[2].nama,"Tami");
	strcpy (nasabah[2].bank, "BRI");
	nasabah[2].tgl_lahir.tanggal = 24;
	nasabah[2].tgl_lahir.bulan= 11;
	nasabah[2].tgl_lahir.tahun = 1998;
	strcpy (nasabah[2].alamat.kota,"Banyuwangi");
	strcpy (nasabah[2].alamat.provinsi,"Jawa Timur");
	strcpy (nasabah[2].alamat.jalan,"Jln.Simpang 2");
	strcpy (nasabah[2].no_rek,"30240392");
	nasabah[2].saldo = 3000000;
	
		
while(loop==1){
	
	printf ("\n-----------------------PROGRAM DATA NASABAH----------------------\n\n");
	printf ("1. menampilkan data nasabah\n");
	printf ("2. pencarian data berdasarkan nomer rekening\n3. akumulasi saldo nasabah\n");
	printf ("4. pencarian data nasabah berdasarkan kota\n");
	printf ("5. pencarian data nasabah berdasarkan umur\n");
	printf ("6. menampilkan data nasabah dengan saldo terbanyak dan yang tersedikit\n\n");
	printf ("Masukkan pilihan: ");
	scanf ("%d",&pilih);
	if(pilih == 1){
			printf("Data seluruh nasabah : \n\n");
			for(i = 0; i<3; i++){
				printf("Nama			: %s\n",nasabah[i].nama);
				printf("bank			: %s\n",nasabah[i].bank);
				printf("tanggal lahir	: %d\n",nasabah[i].tgl_lahir.tanggal);
				printf("bulan lahir		: %d\n",nasabah[i].tgl_lahir.bulan);
				printf("tahun lahir		: %d\n",nasabah[i].tgl_lahir.tahun);
				printf("kota			: %s\n",nasabah[i].alamat.kota);
				printf("provinsi		: %s\n",nasabah[i].alamat.provinsi);	
				printf("jalan			: %s\n",nasabah[i].alamat.jalan);
				printf("nomer rekening		: %s\n",nasabah[i].no_rek);
				printf("saldo nasabah		: %.ld\n\n\n\n\n",nasabah[i].saldo);
			}
		}
		
		if(pilih == 2) {
			char nomer[20];
			printf("masukan nomor rekening =  ");
			scanf("%s",&nomer);
			for(i=0;i<2;i++){
				if(!strcmp(nasabah[i].no_rek,nomer)){
					
				printf("Nama			: %s\n",nasabah[i].nama);
				printf("bank			: %s\n",nasabah[i].bank);
				printf("tanggal lahir	: %d\n",nasabah[i].tgl_lahir.tanggal);
				printf("bulan lahir		: %d\n",nasabah[i].tgl_lahir.bulan);
				printf("tahun lahir		: %d\n",nasabah[i].tgl_lahir.tahun);
				printf("kota			: %s\n",nasabah[i].alamat.kota);
				printf("provinsi		: %s\n",nasabah[i].alamat.provinsi);	
				printf("jalan			: %s\n",nasabah[i].alamat.jalan);
				printf("nomer rekening		: %s\n",nasabah[i].no_rek);
				printf("saldo nasabah		: %.ld\n\n\n\n\n",nasabah[i].saldo);
					break;
					
				}
			}
		}
		if(pilih == 3){
			printf("--------------------TOTAL SALDO NASABAH-----------------------\n\n");
			float hasil=0;
			
			for(i=0;i<2;i++){
				hasil+=nasabah[i].saldo;
				printf("%.ld\n",nasabah[i].saldo);			
			}
			printf("--------------------------+\n");
			printf("%.ld\n\n",hasil);
			
		}
		
		if(pilih == 4){
			char kot[10];
			printf("masukan kota anda = ");
			scanf("%s",&kot);
			for(i=0;i<2;i++){
				if(!strcmp(nasabah[i].alamat.kota,kot)){
						
					printf("Nama			: %s\n",nasabah[i].nama);
					printf("bank			: %s\n",nasabah[i].bank);
					printf("tanggal lahir	: %d\n",nasabah[i].tgl_lahir.tanggal);
					printf("bulan lahir		: %d\n",nasabah[i].tgl_lahir.bulan);
					printf("tahun lahir		: %d\n",nasabah[i].tgl_lahir.tahun);
					printf("kota			: %s\n",nasabah[i].alamat.kota);
					printf("provinsi		: %s\n",nasabah[i].alamat.provinsi);	
					printf("jalan			: %s\n",nasabah[i].alamat.jalan);
					printf("nomer rekening		: %s\n",nasabah[i].no_rek);
					printf("saldo nasabah		: %.ld\n\n\n\n\n",nasabah[i].saldo);
						break;
				}
			}
		}
		if(pilih == 5){
			int umur,tahun,salah=0;
			printf("-------CARI NASABAH DENGAN UMUR--------\n\n\n");
			printf("masukan umur nasabah = ");
			scanf("%d",&umur);
			for(i=0;i<2;i++){
			tahun=2019-umur;
				if(tahun==nasabah[i].tgl_lahir.tahun){
						
					printf("Nama			: %s\n",nasabah[i].nama);
					printf("bank			: %s\n",nasabah[i].bank);
					printf("tanggal lahir	: %d\n",nasabah[i].tgl_lahir.tanggal);
					printf("bulan lahir		: %d\n",nasabah[i].tgl_lahir.bulan);
					printf("tahun lahir		: %d\n",nasabah[i].tgl_lahir.tahun);
					printf("kota			: %s\n",nasabah[i].alamat.kota);
					printf("provinsi		: %s\n",nasabah[i].alamat.provinsi);	
					printf("jalan			: %s\n",nasabah[i].alamat.jalan);
					printf("nomer rekening		: %s\n",nasabah[i].no_rek);
					printf("saldo nasabah		: %.ld\n\n\n\n\n",nasabah[i].saldo);
						salah=1;
						break;
				}
			}
			if(salah == 0){
				printf("umur nasabah tidak ditemukan\n\n\n");
				
			}
		}
		if(pilih == 6){
			printf("=========nasabah saldo terbesar dan terkecil=========\n\n\n");
			float min=0,max=0;
			for(i=0;i<2;i++){
				if(nasabah[i].saldo<min||min==0){
					min = nasabah[i].saldo;
				}
				if (nasabah[i].saldo>max||max==0){
					max = nasabah[i].saldo;
				}
				
			}
			printf("saldo terbesar = %.2f \n",max);
			printf("saldo terkecil = %.2f\n\n\n",min);
		}
}
	return 0;
}
