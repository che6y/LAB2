#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	printf("Choose size of the array: ");
	int a = scanf("%d", &n);
	if(a == 1) {
		printf("Add all elements: ");
		int* x;
		x = (int*)malloc(sizeof(int)*n);
		
		//EX.A
		float s, max, min;
		int k=0,i;
		for(i=0; i<n; i++){
			scanf("%d", &x[i]);
			if (i == 0) {
				min = x[0];
				max = x[0];
			}
			if(i != 0 && min > x[i]) min = x[i];
			if(i != 0 && max < x[i]) max = x[i];
		}
		printf("\n%6.3f %6.3f\n", min,max);
		s = (min + max) / 2;
		for(i=0; i<n; i++){
			if(x[i] > s) k++;
		}	
		printf("Ex.A: %d\n",k);
		
		//EX.B
		float c,d,e = 1.0;
		for(i=0; i<n; i++){
			if (x[i]<0) {
				c = i; break;
			}
		}
		for(i=n-1; i>=0; i--){
			if (x[i]<0) {
				d = i; break;
			}
		}
		for(i=c+1; i<d; i++){
			e *= x[i];
		}	
		printf("Ex.B: %6.3f\n",e);
		
		//EX.C
		float a,b;
		int count = 0;
		printf("Choose two numbers: ");
		scanf("%f %f", &a, &b);
		for(i=0; i<n; i++){
			if(x[i]>a && x[i]<b && x[i]%2==0) {
				count++;
			}
		}	
		printf("Ex.B: There are %d numbers between %f and %f\n",count,a,b);
		
		free(x);
	} else {
		printf("Wrong data!\n");
	}
	system("pause");
	return 0;
}
