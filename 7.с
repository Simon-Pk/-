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
}
