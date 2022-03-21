#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
printf("[----- [SIWON JOO] [2018038045] -----]\n\n");
printf("Size of char: %ld byte\n",sizeof(charType)); // charType은 char 형으로 변수가 선언되었기 때문에 1byte 를 출력한다.
printf("Size of int: %ld bytes\n",sizeof(integerType)); // integerType은 integer 형으로 변수가 선언되었기 때문에 4byte 를 출력한다.
printf("Size of float: %ld bytes\n",sizeof(floatType)); // floatType은 float 형으로 변수가 선언되었기 때문에 4byte 를 출력한다.
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // doubleType은 double 형으로 변수가 선언되었기 때문에 8byte 를 출력한다.
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); // 자료형 Char 의 메모리 크기는 1byte 이므로 1byt e를 출력한다.  
printf("Size of int: %ld bytes\n",sizeof(int)); // 자료형 integer 의 메모리 크기는 4byte 이므로 4byte 를 출력한다.
printf("Size of float: %ld bytes\n",sizeof(float)); // 자료형 float 의 메모리 크기는 4byte 이므로 4byte 를 출력한다.
printf("Size of double: %ld bytes\n",sizeof(double)); // 자료형 double 의 메모리 크기는 8byte 이므로 8byte 를 출력한다.
printf("-----------------------------------------\n"); 
// 자료형 포인터의 기본 메모리 크기는 머신에 따라 다르게 출력이 되어지는데 현재
// 64bit machine을 쓰고 있어도 vscode 에서 디버깅할때 32bit 디버거를 사용 하기 때문에 전부 4byte가 출력된다.
// 만약 64bit 디버거로 디버깅 할 경우 전부 8byte 가 출력될 것이다.
printf("Size of char*: %ld byte\n",sizeof(char*)); //char *형의 기본 메모리 크기를 나타내므로 32bit 머신이면 4byte 를 출력한다.
printf("Size of int*: %ld bytes\n",sizeof(int*));  //int *형의 기본 메모리 크기를 나타내므로 32bit 머신이면 4byte 를 출력한다.
printf("Size of float*: %ld bytes\n",sizeof(float*));  //float *형의 기본 메모리 크기를 나타내므로 32bit 머신이면 4byte 를 출력한다.
printf("Size of double*: %ld bytes\n",sizeof(double*));  //double *형의 기본 메모리 크기를 나타내므로 32bit 머신이면 4byte 를 출력한다.
return 0; 
}