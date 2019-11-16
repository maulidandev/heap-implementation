#include "prototipe.h"
#include <time.h>
#define SIZE 10

int main(){
	int angka[SIZE];
	int heapData[SIZE], i;

	srand(time(NULL));

	for(i=0;i<SIZE;i++)
		angka[i]=rand()%10+1;

	printf("---------------------------------------------\n");
	printf("Data Asli : \n");
	cetak(angka,SIZE);

	/* Heapify */
	for(i=0;i<SIZE;i++){
		heapData[i]=angka[i];
		filterUp(heapData,SIZE,i,'<');
	}

	for(;i<SIZE;i++){
		if(heapData[0] < angka[i]){
			heapData[0]=angka[i];
			filterDown(heapData, SIZE, 0, '<');
		}
	}

	printf("---------------------------------------------\n");
	printf("Data setelah di heapify : \n");
	cetak(heapData,SIZE);

	return 0;
}
