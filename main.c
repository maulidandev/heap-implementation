#include "prototipe.h"
#include <time.h>
#define NA 100
#define NS 10

int main(){
	int angka[NA];
	int sort[NS], i;

	srand(time(NULL));

	for(i=0;i<NA;i++)
		angka[i]=rand()%10+1;

	printf("Data Asli : ");
	cetak(angka,NA);

	/* Heapify */
	for(i=0;i<NS;i++){
		sort[i]=angka[i];
		filterUp(sort,NS,i,'<');
		cetak(sort,i+1);
	}
	printf("---------------------------------------------\n");

	for(;i<NA;i++){
		if(sort[0] < angka[i]){
			sort[0]=angka[i];
			filterDown(sort, NS, 0, '<');
			cetak(sort, NS);
		}
	}

	printf("---------------------------------------------\n");
	cetak(sort,NS);
	cetak(angka,NA);

	bubble(sort,NS);
	bubble(angka,NA);

	cetak(sort,NS);
	cetak(angka,NA);

	return 0;
}
