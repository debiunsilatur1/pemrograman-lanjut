#include <stdio.h>
#include <stdlib.h>

float x,y,hasil2,i,a;

float pangkatRekursif (float x, float y){
	
	if (y==0)
		return 1;
	if (y<=-1)
		return pangkatRekursif (x,y+1)/x; //x=5, y=-2 (5,-1)/5  (5,0)/5  //x=2 y=-3 (2,-2)/2 (2,-1)/2  (2/0)/2
	else
		return pangkatRekursif (x,y-1)*x; //misal x=2, y=3 (2,2)*2     (2,1)*2   (2,0)*2  //x=3, y=3 (3,2)3  (3,1)*3 (3,0)*3 // x=5, y=2 (5,1)*5  ( 
	}
int main(){
	float x,y,hasil1;
	
	printf ("Masukkan Basis : ");
	scanf ("%f",&x);
	printf ("Masukkan Pangkat : ");
	scanf ("%f", &y);

	hasil1=pangkatRekursif (x,y);
	printf ("Hasil Pangkat Rekursif adalah : %f\n", hasil1);
	return 0;
}

