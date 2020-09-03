#include <stdio.h>

int compare (int a, int b)
{
 if ( a>b)  return -1;
 else  return 1;
}
int bubbleSort(int a[] , int n , int (*someFun)(int a, int b)){
	int i,j,temp =0;
	for (i=0 ; i <n; i++){
		for ( j = 0 ; j <n-1; j++){
			if(compare(a[j], a[j+1])>0){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				//printf( "%d , ", a[j]);
			}
		}
		printf("\n");
	}
}

int main(){
	int i;
	int  AA[] = { 5,66,255, 22,33};
//	for ( i = 0; i < 5; i ++) 
//	printf(" printting out\n");
//	 printf ("%d\n", AA[i]);
	
	bubbleSort ( AA, 5, compare);
	for ( i = 0; i < 5; i ++) 
//	printf(" printting out\n");
      printf ("%d ,", AA[i]);

	return 0;
}
