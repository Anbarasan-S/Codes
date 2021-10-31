#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
char* solve (int* A, int N ) {
  int total=0;
   for(int i=0;i<N/2;i++)
   {
      while(A[i]>9)
      {
         A[i]/=10;
      }
      total=total*10+(A[i]);
   }
   for(int i=N/2;i<N;i++)
   {
      total=total*10+(A[i]%10);
   }
   if(total%11==0)
   return "OUI";
   return "NON";
}
int main() {
    int N;
    scanf("%d", &N);
    int i_A;
    int *A = (int *)malloc(N*sizeof(int));
    for(i_A=0; i_A<N; i_A++)
    	scanf("%d", &A[i_A]);
    char* out_ = solve(A,N);
    printf("%s", out_);
}