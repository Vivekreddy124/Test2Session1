#include<stdio.h>
int input_number()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
void output(intn,int prime)
{
  if(is_prime(n))
    printf("the number %d is a prime\n");
  else
    printf("the number is not prime\n");
}
int main()
{
  int n=input_number();
  int print=is_prime(n);
  output(n,prime);
  return 0;
}