#include <stdio.h>
#include <locale.h>
int arr(int **a,int n){
    printf("������� �������� �������\n");
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
int main()
{
setlocale(LC_ALL,"Russian");
int n;
printf("������� ������� �������\n");
scanf("%d",&n);
int **a=arr(a,n);
}
