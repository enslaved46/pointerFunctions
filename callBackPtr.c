#include <stdio.h>

int bubbleSort(int a[] , int n , int (*someFun)(int a, int b));
int compare (int a, int b);

void displayMessage( void * string);
void call_fun (void (*funPtr)(void *), void *message) ;
 	
int main(){
	int i;
	int  AA[] = { 5,66,255, 22,33};
	const char *message =  "some message";
	
	//callBackFun(displayMessage, message);
	call_fun(displayMessage, (void *) message);
	bubbleSort ( AA, 5, compare);
	
	for ( i = 0; i < 5; i ++) 
		printf ("%d ", AA[i]);
	return 0;
}


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
			}
		}
	}
}
void displayMessage( void * string){
printf("%s\n",(char*)string);
}


// call Back function that funPtr points out to
void call_fun (void (*funPtr)(void *), void *message) {
funPtr(message);
}

