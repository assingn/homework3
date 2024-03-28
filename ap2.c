#include <stdio.h> //표준입출력을 담당하고 있는 <stdio.h> 헤더파일 선언
#include <stdlib.h> //함수 사용을 위해 <stdlib.h> 헤더파일 선언

void main() //main문 시작
{
    printf("[----- [배정민] [2023041088] -----]\n");

    int list[5]; //5칸짜리 list 배열 선언
    int *plist[5]; //plist라는 5칸짜리 포인터 배열 선언
    list[0] = 10; //list[0]의 요소를 10으로 채움
    list[1] = 11; //list[1]의 요소를 11로 채움
    plist[0] = (int*)malloc(sizeof(int)); //int형 포인터인 plist[0]에 malloc()이 반환하는 주소를 int 형식의 포인터로 해석
    
    printf("list[0] \t= %d\n", list[0]); //list[0]의 값 출력
    printf("list \t\t= %p\n", list); //list 배열의 시작 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); //list[0]의 메모리 주소 출력
    printf("list + 0 \t= %p\n", list+0); //list 배열의 첫번째 인덱스에 위치한 메모리 주소 출력
    printf("list + 1 \t= %p\n", list+1); //list 배열의 두번째 인덱스에 위치한 메모리 주소 출력
    printf("list + 2 \t= %p\n", list+2); //list 배열의 세번째 인덱스에 위치한 메모리 주소 출력
    printf("list + 3 \t= %p\n", list+3); //list 배열의 네번째 인덱스에 위치한 메모리 주소 출력
    printf("list + 4 \t= %p\n", list+4); //list 배열의 다섯번째 인덱스에 위치한 메모리 주소 출력
    printf("&list[4] \t= %p\n", &list[4]); //list[4]의 메모리 주소 출력
    
    free(plist[0]); //할당한 동적메모리 해제
}