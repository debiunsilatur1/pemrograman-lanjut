#include <stdio.h>
#include <stdlib.h>

int main()
{  
    int size=10;
    int data[10]={2, 3, 5, 6, 12, 44, 56, 65, 73 ,81};
    int cari; 
    int hasil;
    int i;
    
	printf("Data Array\n");
    
    for(i=0;i<size;i++)
        printf("  ",data[i]);
           
    printf("masukkan data yang ingin anda cari: ");
    scanf("%d",&cari);
    // pencarian
  
    hasil = binary(data, size, cari);
    if (hasil==0)
        printf("Nilai tidak ditemukan");
    else
        printf("Nilai ditemukan di indeks ke %d",hasil);
    getch();
}

int binary(int array[], int size, int elemen)
{
    int awal = 0;
    int akhir = size-1;
    int nilaiTengah = (awal+akhir)/2;
    int i;
    for (i=0;i<=akhir;i++)
    {
          nilaiTengah = (awal+akhir)/2;
          if (array[nilaiTengah]==elemen)
              return nilaiTengah;
          else if (elemen<array[nilaiTengah])
              akhir = nilaiTengah-1;
          else
              awal = nilaiTengah+1;
    }
    
    return 0;
}


