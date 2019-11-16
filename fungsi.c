#include "prototipe.h"

void cetak(int angka[], int n){
	int i;

	for(i=0;i<n;i++)
		printf("%d ",angka[i]);

	printf("\n");
}

void filterUp(int angka[], int n, int pos, char cek){
	int parent = (pos-1)/2;

	if(cek=='<'){
		while(pos>0){
			if(angka[pos] < angka[parent]){
				swap(&angka[pos],&angka[parent]);
				pos = parent;
				parent = (pos-1)/2;
			}else{
				break;
			}
		}
	}
}

void filterDown(int *angka, int n, int parent, char cek){
	int lchild, rchild;

	if(cek == '<'){
		while(parent <= (n-2)/2){
			lchild=2*parent+1;
			rchild=2*(parent+1);
			// printf("\t%d %d %d\n", lchild, parent, rchild);
			if((angka[lchild] <= angka[rchild]) || (rchild >= n)){
				if(angka[lchild] < angka[parent]){
					swap(&angka[parent],&angka[lchild]);
					parent=lchild;
				}else{
					break;
				}
			}else if(angka[rchild] < angka[lchild]){
				if(angka[rchild] < angka[parent]){
					swap(&angka[parent],&angka[rchild]);
					parent=rchild;
				}else{
					break;
				}
			}else{
				break;
			}
		}
	}
}

void swap(int *angka1, int *angka2){
	int simpan = *angka1;
	*angka1 = *angka2;
	*angka2 = simpan;
}

void bubble(int angka[], int n){
	int i, j;

	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(angka[j] < angka[j+1]){
				swap(&angka[j], &angka[j+1]);
			}
		}
	}
}
