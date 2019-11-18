#include <stdio.h>
#include <stdlib.h>

float x,y,hasil2,i,a;

float pangkatIterasi (float x, float y){
	hasil2=1;
	if (y==0)
		return 1;
	if (y<=-1)
		for (i=-1; i>=y; i--){
			hasil2=hasil2*(1.0/x);// x=2, y=-3 (dimulai dari -1; i lebih dari -3; i berkurang)
		}
	else
		for (i=1; i<=y; i++){
			hasil2=hasil2*x;
		}
	return hasil2;
}
int main(){
	printf ("Masukkan Basis : ");
	scanf ("%f",&x);
	printf ("Masukkan Pangkat : ");
	scanf ("%f", &y);
	hasil2=pangkatIterasi (x,y);
	printf ("Hasil Pangkat Iterasi adalah : %f", hasil2);
	return 0;
}

