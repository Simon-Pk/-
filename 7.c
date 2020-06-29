#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define n 5
int keyboard_fill_array(int (*A)[n]) {
for (int i = 0; i < n ; i++){
    for (int j = 0; j < n ; j++){
        printf("A[%d][%d]=", i, j);
        scanf("%d", &A[i][j]);
                                }
                            }
return **A;
                                     }
int file_fill_array(int (*A)[n]){
FILE *f;
f=fopen("f.txt","r");
if(f!=NULL){
    for(int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            fscanf(f,"%d",&A[i][j]);
    fclose(f);
           }
else
    printf("Ошибка открытия файла");
return **A;
                                  }
int decision(int A[][n],int x[],int *pfunc(A)){
pfunc(A);
 int z[1],i, j, sum;
 z[0] = 0;
 for (j = 0; j < n; j++)
	{
		sum = 0;

		for (i = 0; i < n; i++)
		{
			if (A[i][j] > 0)
				sum += A[i][j];
		}

		if (sum > z[0] || j == 0) {
			z[0] = sum;
			for (i = 0; i < n; i++)
				x[i] = A[i][j];
		}
	}
	return *x;
 }
int main()
{
setlocale(LC_ALL,"Russian");
int A[n][n], x[n],num;
int (*pfunc)(int (*)[n]) = NULL;
do{
    printf("Введите 1 - чтобы ввести значения с клавиатуры и 2 - чтобы взять значения из файла\n");
    scanf("%d",&num);
  }while(num!=1 && num!=2);
    switch(num){
        case 1:
            pfunc=keyboard_fill_array;
            break;
        case 2:
            pfunc=file_fill_array;
            break;
               }
decision(A,x,*pfunc);
}
