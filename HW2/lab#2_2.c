#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("[----- [SIWON JOO] [2018038045] -----]\n\n");
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); // 변수 i 의 값 출력
printf("address of i == %p\n", &i); // 변수 i의 주소 출력
printf("value of ptr == %p\n", ptr); // 포인터 변수 ptr 값 출력
printf("address of ptr == %p\n", &ptr); // 포인터 변수 ptr 주소 출력
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n"); 
printf("value of i == %d\n", i); // 변수 i 의 값 출력
printf("address of i == %p\n", &i); // 변수 i의 주소 출력
printf("value of ptr == %p\n", ptr); // 포인터 변수 ptr 값 출력 현재 ptr은 i 의 주소를 받았기 때문에 i의 주소를 출력
printf("address of ptr == %p\n", &ptr); // 포인터 변수 ptr의 할당된 주소는 변하지 않기 때문에 처음의 ptr 주소를 출력
printf("value of *ptr == %d\n", *ptr); // 포인터 변수 ptr의 메모리 값 출력 
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); // 변수 i 의 값 출력
printf("address of i == %p\n", &i); // 변수 i의 주소 출력
printf("value of ptr == %p\n", ptr); // 포인터 변수 ptr 값 출력 현재 ptr은 i 의 주소를 받았기 때문에 i의 주소를 출력
printf("address of ptr == %p\n", &ptr); // 포인터 변수 ptr의 할당된 주소는 변하지 않기 때문에 처음의 ptr 주소를 출력
printf("value of *ptr == %d\n", *ptr); // 
printf("value of dptr == %p\n", dptr); // 
printf("address of dptr == %p\n", &dptr); // 
printf("value of *dptr == %p\n", *dptr); // 
printf("value of **dptr == %d\n", **dptr); //
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n"); //
printf("value of i == %d\n", i); // 
printf("value of *ptr == %d\n", *ptr); //
printf("value of **dptr == %d\n", **dptr); //
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);
return 0;
}