#include <stdio.h>

float skor (int tugas,int uts,int uas);
void matkul (float skor, int sks, char *huruf, int *point, int *jumlah);

typedef struct
{
    char namamhs[32],namamk[32],huruf;
    int Nmk,tugas,uts,uas,point,sks,jml,tsks,tjml;
    float skor,IP;
}mahasiswa;

main()
{
    int x,y,Nmhs,LOOP;
    char ans;
    mahasiswa mhs[32][12];
 
  
    printf("Masukkan Nama Mahasiswa : ",x);
   scanf("%d",&x);
     fflush(stdin);
    for(x=1;x<=Nmhs;x++)
    {
       
        gets(mhs[x][0].namamhs);
        y=1;
        mhs[x][0].Nmk=1;
        mhs[x][0].tsks=0;
        mhs[x][0].tjml=0;
        LOOP:
        printf("Masukkan Nama Matkul ke-%d : ",y);gets(mhs[x][y].namamk);
        printf("Masukkan Nilai Matkul %s\n",mhs[x][y].namamk);
        printf("Tugas : ");scanf("%d", &mhs[x][y].tugas);
        printf("UTS   : ");scanf("%d", &mhs[x][y].uts);
        printf("UAS   : ");scanf("%d", &mhs[x][y].uas);
        printf("Masukkan Jumlah SKS Matkul %s : ",mhs[x][y].namamk);scanf("%d", &mhs[x][y].sks);
        fflush(stdin);
        mhs[x][y].skor=skor(mhs[x][y].tugas, mhs[x][y].uts, mhs[x][y].uas);
        matkul(mhs[x][y].skor, mhs[x][y].sks, &mhs[x][y].huruf, &mhs[x][y].point, &mhs[x][y].jml);
        mhs[x][0].tsks+=mhs[x][y].sks;
        mhs[x][0].tjml+=mhs[x][y].jml;
        printf("Apakah anda mau menambahkan matkul lainnya (Y/N) : ");
        scanf("%c",&ans);
        if (ans == 'Y'|| ans == 'y'){fflush(stdin); y++; mhs[x][0].Nmk++; goto LOOP;}
        mhs[x][0].IP=mhs[x][0].tjml/mhs[x][0].tsks;
    
    }
   
    for(x=1;x<=Nmhs;x++)
    {
        y=1;
        printf("%s\n",mhs[x][0].namamhs);
        printf("+----+----------------+-------+-------+-----+--------+\n");
        printf("| No |    Mata kuliah | Huruf | Point | SKS | Jumlah |\n");
        printf("+----+----------------+-------+-------+-----+--------+\n");
        for(y=1;y<=mhs[x][0].Nmk;y++)
        {
            printf("| %02d | %14s | %3c   | %3d   | %2d  | %4d   |\n",y, mhs[x][y].namamk, mhs[x][y].huruf,
                   mhs[x][y].point, mhs[x][y].sks, mhs[x][y].jml);
        }
        printf("+----+----------------+-------+-------+-----+--------+\n");
        printf("| Total =                             | %2d  | %4d   |\n",mhs[x][0].tsks,mhs[x][0].tjml);
        printf("+-------------------------------------+-----+--------+\n");
        printf("     IPK : %f",mhs[x][0].IP);
        printf("\n\n");
    }
}

float skor (int tugas,int uts,int uas)
{
    return tugas*0.25 + uts*0.3 + uas*0.45;
}

 void matkul (float skor, int sks, char *huruf, int *point, int *jumlah)
{
    if (skor >= 85)
    {
        *huruf='A';
        *point=4;
    }
    else if (skor >=71 && skor <85)
    {
        *huruf='B';
        *point=3;
    }
    else if (skor >=56 && skor <71)
    {
        *huruf='C';
        *point=2;
    }
    else if (skor < 56)
    {
        *huruf='D';
        *point=1;
    }
    *jumlah=*point*sks;
}


