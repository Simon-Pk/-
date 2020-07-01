#include <stdio.h>
int arr(int **a,int n){
    printf("enter elements matrix\n");
a=(int**) malloc(sizeof(int*)*n);
for(int i=0;i<n;i++){
a[i]=(int*) malloc(sizeof(int)*(n+1));
a[i][n]=0;
for(int j=0;j<n;j++){
printf("a[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
a[i][n]+=a[i][j];
}
}
return a;
}
void work(int** a, int n)
{
    int i, j, min, ik, jk,temp;
    int* str;
    min = a[0][0];
    ik = 0; jk = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                ik = i;
                jk = j;
            }
        }
    }
    printf("min element: %d\n",min);
    for (i = 0; i < n; i++) {
        temp = a[i][0];
        a[i][0] = a[i][jk];
        a[i][jk] = temp;
    }
    str = a[0];
    a[0] = a[ik];
    a[ik] = str;
}

void output(int **a,int n,int b){
if (b==0){
printf("initial matrix:\n");
}
else
 printf("resulting matrix\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
printf("a[%d][%d]=%d ",i,j,a[i][j]);
printf("%\n");
}
}
int main()
{
int n;
printf("enter order matrix\n");
scanf("%d",&n);
int **a=arr(a,n);
output(a, n, 0);
    work(a, n);
    output(a, n,1);
}
