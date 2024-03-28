#include <stdio.h> //표준입출력을 담당하고 있는 <stdio.h> 헤더파일 선언
#include <stdlib.h> //함수 사용을 위해 <stdlib.h> 헤더파일 선언

void main() //main문 시작
{
    printf("[----- [배정민] [2023041088] -----]\n");

    int list[5]; //5칸짜리 list 배열 선언
    int *plist[5] = {NULL,}; //plist라는 5칸짜리 포인터 배열 선언하고 초기화
    plist[0] = (int *)malloc(sizeof(int)); //int형 포인터인 plist[0]에 malloc()이 반환하는 주소를 int 형식의 포인터로 해석
    list[0] = 1; //list[0]의 요소를 1로 채움
    list[1] = 100; //list[1]의 요소를 100으로 채움
    *plist[0] = 200; //plist[0]이 가리키는 메모리 주소에 200이라는 값을 저장
    
    printf("list[0] = %d\n", list[0]); //list[0]의 메모리 주소에 위치한 값 출력
    printf("&list[0] = %p\n", &list[0]); //list[0]이 메모리 주소 출력
    printf("list = %p\n", list); //list 배열의 시작 주소 출력
    printf("&list = %p\n", &list); //list 배열의 첫번째 인덱스에 위치한 곳의 메모리 주소 출력
    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]); //list[1]의 메모리 주소에 위치한 값 출력
    printf("&list[1] = %p\n", &list[1]); //list[1]의 메모리 주소 출력
    printf("*(list+1) = %d\n", *(list + 1)); //list 배열의 2번째 인덱스에 위치한 값 출력
    printf("list+1 = %p\n", list+1); //list 배열의 2번째 인덱스에 위치한 곳의 메모리 주소 출력
    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]); //plist[0]이 가르키는 메모리 주소에 위치한 값 출력
    printf("&plist[0] = %p\n", &plist[0]); //plist[0]의 메모리 주소 출력
    printf("&plist = %p\n", &plist); //plist 배열의 첫번째 인덱스에 위치한 곳의 메모리 주소 출력
    printf("plist = %p\n", plist); //plist 배열의 첫번째 인덱스에 위치한 곳의 메모리 주소 출력
    printf("plist[0] = %p\n", plist[0]); //plist[0]이 가르키는 곳의 메모리 주소 출력
    printf("plist[1] = %p\n", plist[1]); //plist[1]이 가르키는 곳의 메모리 주소 출력
    printf("plist[2] = %p\n", plist[2]); //plist[2]이 가르키는 곳의 메모리 주소 출력
    printf("plist[3] = %p\n", plist[3]); //plist[3]이 가르키는 곳의 메모리 주소 출력
    printf("plist[4] = %p\n", plist[4]); //plist[4]이 가르키는 곳의 메모리 주소 출력

    free(plist[0]); //할당한 동적메모리 해제.
}