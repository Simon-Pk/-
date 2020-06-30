#include <stdio.h>
#include <stdlib.h>
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
    printf("Error opening file");
return **A;
                                  }

int decision(int A[][n],int x[],int *pfunc(A)){
pfunc(A);
int z[1],i, j, sum;
z[0] = 0;
for (j = 0; j < n; j++){
    sum = 0;
    for (i = 0; i < n; i++){
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

 int progression(int y, int x[], int i){
if (i < n){
    if ((x[0] == x[1] == 1) && (x[i] == x[i - 1] + x[i - 2])){
        y = 1;
                                                             }
    else{
        y = 0;
        }
    if (y == 1)
        y = progression(y, x, i + 1);
          }
    else{
        y = 1;
        return y;
        }
return y;
                                       }

int output(int A[][n],int x[],int y){
FILE *f;
system("cls");
for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("A[%d][%d]=%d ", i, j, A[i][j]);
                             }
    printf("\n");
                     }
    for(int i=0;i<n;i++)
printf("\nx[%d]=%d",i,x[i]);
printf("\ny=%d",y);
f=fopen("out.txt","w");
if(f!=NULL){
        for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            fprintf(f,"A[%d][%d]=%d ", i, j, A[i][j]);
                             }
    fprintf(f,"\n");
                            }

    for(int i=0;i<n;i++)
fprintf(f,"\nx[%d]=%d",i,x[i]);
fprintf(f,"\ny=%d",y);
           }
else
    printf("Error opening file");
                              }

int main()
{
int A[n][n], x[n],num,y;
int (*pfunc)(int (*)[n]) = NULL;
do{
    printf("1 - keyboard \n2 - file\n");
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
y=progression(y, x, 2);
output(A,x,y);
}
