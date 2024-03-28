#include <stdio.h> //표준입출력을 담당하고 있는 <stdio.h> 헤더파일 선언

int main() //main문 시작
{
    printf("[----- [배정민] [2023041088] -----]\n");

    char charType; //문자형 변수(1byte)
    int integerType; //정수형 변수(4bytes)
    float floatType; //실수형 변수(4bytes)
    double doubleType; //실수형 변수(8bytes)
 
    printf("Size of char: %ld byte\n",sizeof(charType)); //문자형 변수 charType의 메모리 크기를 바이트 단위로 출력(1bytes)
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //정수형 변수 integerType의 메모리 크기를 바이트 단위로 출력(4bytes)
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //실수형 변수 floatType의 메모리 크기를 바이트 단위로 출력(4bytes)
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //실수형 변수 doubleType의 메모리 크기를 바이트 단위로 출력(8bytes)
    
    printf("-----------------------------------------\n");
 
    printf("Size of char: %ld byte\n",sizeof(char)); //문자형의 메모리 크기를 바이트 단위로 출력(1bytes)
    printf("Size of int: %ld bytes\n",sizeof(int)); //정수형의 메모리 크기를 바이트 단위로 출력(4bytes)
    printf("Size of float: %ld bytes\n",sizeof(float)); //실수형의 메모리 크기를 바이트 단위로 출력(4bytes)
    printf("Size of double: %ld bytes\n",sizeof(double)); //실수형의 메모리 크기를 바이트 단위로 출력(8bytes)
 
    printf("-----------------------------------------\n");
 
    printf("Size of char*: %ld byte\n",sizeof(char*)); //문자형 포인터의 메모리 크기를 바이트 단위로 출력(vscode가 32bit 환경이므로 포인터의 메모리 크기는 4bytes)
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //정수형 포인터의 메모리 크기를 바이트 단위로 출력(vscode가 32bit 환경이므로 포인터의 메모리 크기는 4bytes)
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //실수형 포인터의 메모리 크기를 바이트 단위로 출력(vscode가 32bit 환경이므로 포인터의 메모리 크기는 4bytes)
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //실수형 포인터의 메모리 크기를 바이트 단위로 출력(vscode가 32bit 환경이므로 포인터의 메모리 크기는 4bytes)
    //포인터의 메모리 크기는 동일
 
    return 0; //0값 반환.
}