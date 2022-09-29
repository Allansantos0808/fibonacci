
//fib(recursivo)

#include<stdio-h>

int fibo(intn){

  in(n==1){

    return 0;
  }

  if(n==2){

    return 1;
  }

  return fibo(n-1) + fibo(n-2)

}

int main(void){

  int n;

  scanf("%d", &n);

  printf("%d", fibo(n));

  return 0;
}
