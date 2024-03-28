#include <stdio.h> //표준입출력을 담당하고 있는 <stdio.h> 헤더파일 선언

int main() //main문 시작
{
    printf("[----- [배정민] [2023041088] -----]\n");

    int i; //정수형 변수 i 선언
    int *ptr; //정수형 포인터 변수 *ptr 선언
    int **dptr; //정수형 이중 포인터 변수 **dptr 선언
    i = 1234; //i에 1234 값 할당

    printf("[checking values before ptr = &i] \n"); //ptr이 i의 메모리 주소를 가르키기 전 임을 알려준다
    printf("value of i == %d\n", i); //i의 값(1234) 출력
    printf("address of i == %p\n", &i); //i의 메모리 주소 출력
    printf("value of ptr == %p\n", ptr); //정수형 포인터 변수 ptr의 값 출력(임의의 값)
    printf("address of ptr == %p\n", &ptr); //정수형 포인터 변수 ptr의 메모리 주소 출력
    
    ptr = &i; //포인터 변수 ptr이 i의 주소를 가르킴

    printf("\n[checking values after ptr = &i] \n"); //ptr이 i의 메모리 주소를 가르킨 후 임을 알려준다
    printf("value of i == %d\n", i); //i의 값(1234) 출력
    printf("address of i == %p\n", &i); //i의 메모리 주소 출력
    printf("value of ptr == %p\n", ptr); //정수형 포인터 변수 ptr의 값 출력(i의 메모리 주소)
    printf("address of ptr == %p\n", &ptr); //정수형 포인터 변수 ptr의 메모리 주소 출력
    printf("value of *ptr == %d\n", *ptr); //정수형 포인터 변수 ptr이 가르키고 있는 메모리 주소에 위치한 값(i의 값) 출력

    dptr = &ptr; //이중 포인터 변수 dptr이 포인터 변수 ptr의 주소를 가르킴

    printf("\n[checking values after dptr = &ptr] \n"); //dptr이 ptr의 메모리 주소를 가르킨 후 임을 알려준다
    printf("value of i == %d\n", i); //i의 값(1234) 출력
    printf("address of i == %p\n", &i); //i의 메모리 주소 출력
    printf("value of ptr == %p\n", ptr); //정수형 포인터 변수 ptr의 값 출력(i의 메모리 주소)
    printf("address of ptr == %p\n", &ptr); //정수형 포인터 변수 ptr의 메모리 주소 출력
    printf("value of *ptr == %d\n", *ptr); //정수형 포인터 변수 ptr이 가르키고 있는 메모리 주소에 위치한 값(i의 값) 출력
    printf("value of dptr == %p\n", dptr); //정수형 이중 포인터 변수 dptr의 값 출력(ptr의 메모리 주소)
    printf("address of dptr == %p\n", &dptr); //정수형 이중 포인터 변수 dptr의 메모리 주소 출력
    printf("value of *dptr == %p\n", *dptr); //정수형 이중 포인터 변수 dptr이 가르키고 있는 메모리 주소에 위치한 값(ptr의 값 = i의 주소) 출력
    printf("value of **dptr == %d\n", **dptr); //정수형 이중 포인터 변수 dptr가 가리키는 포인터의 값이 가리키는 곳의 값(i의 값) 출력

    *ptr = 7777; //*ptr의 값 변경

    printf("\n[after *ptr = 7777] \n"); //*ptr의 값(i의 값)을 7777로 변경한 후 임을 알려준다
    printf("value of i == %d\n", i); //i의 값(7777) 출력
    printf("value of *ptr == %d\n", *ptr); //*ptr의 값(i의 값) 출력
    printf("value of **dptr == %d\n", **dptr); //**dptr의 값(i의 값) 출력

    **dptr = 8888; //**dptr의 값 변경

    printf("\n[after **dptr = 8888] \n"); //**dptr의 값(i의 값)을 8888로 변경한 후 임을 알려준다
    printf("value of i == %d\n", i); //i의 값(8888) 출력
    printf("value of *ptr == %d\n", *ptr); //*ptr의 값(i의 값) 출력
    printf("value of **dptr == %d\n", **dptr); //**dptr의 값(i의 값) 출력

    return 0; //0값 반환.
}