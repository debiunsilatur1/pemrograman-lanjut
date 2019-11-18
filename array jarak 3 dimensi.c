#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
	int nilai[3][3][3]={{{5,1,5},{6,7,8},{1,2,1}},{{-3,2,1},{-4,3,4},{-5,7,8}},{{4,2,4},{3,4,7},{3,5,2}}};
	int D[15];
	int a,b,c,i,j,k,s=0;
	
	for(a=0;a<3;a++){
		printf("================================================================\n");
		printf("kordinat X\t|\tkordinat Y\t|\tkordinat Z\n");
		printf("================================================================\n");
		for(b=0;b<3;b++){
			for(c=0;c<3;c++){
				printf("%d\t\t\t",nilai[a][b][c]);
			}
			printf("\n");
		}
		printf("\n");
	}
    
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			for(k=0;k<=2;k++){
				if(j<2){
				D[s] = nilai[i][j][k] - nilai[i][j+1][k];
				printf("hasil : %d\n",D[s]);
				s++;
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	
	double D1 = (sqrt(pow(D[0],2)+pow(D[1],2)+pow(D[2],2)))+(sqrt(pow(D[3],2)+pow(D[4],2)+pow(D[5],2)));
	double D2 = (sqrt(pow(D[6],2)+pow(D[7],2)+pow(D[8],2)))+(sqrt(pow(D[9],2)+pow(D[10],2)+pow(D[11],2)));
	double D3 = (sqrt(pow(D[12],2)+pow(D[13],2)+pow(D[14],2)))+(sqrt(pow(D[15],2)+pow(D[16],2)+pow(D[17],2)));
	
	printf("total_D1 adalah %lf\n",D1);
	printf("total_D2 adalah %lf\n",D2);
	printf("total_D3 adalah %lf\n",D3);
	
	
	
	return 0;
};
