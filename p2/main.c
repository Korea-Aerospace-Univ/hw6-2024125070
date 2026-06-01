#include <stdio.h>

int main(void)
{
    int N;            // 입력받을 정수의 개수 (1 <= N <= 20)
    int arr1[20] = {}; // 첫 번째 정수 배열
    int arr2[20] = {}; // 두 번째 정수 배열
    int *p1 = nullptr;          // arr1 접근용 포인터
    int *p2 = nullptr;          // arr2 접근용 포인터
    int curIndex = 0; // 현재 포인터가 가리키는 배열의 인덱스(위치)
    int sum = 0;      // 역방향 합을 저장할 변수
    
    // 정수 개수 N 입력 받기
    scanf("%d", &N);
    
    // 첫 번째 배열에 N개의 정수 입력 받기
    for (p1 = arr1; p1 < arr1 + N; p1++) {
        scanf("%d", p1);
    }
    
    // 두 번째 배열에 N개의 정수 입력 받기
    for (p2 = arr2; p2 < arr2 + N; p2++) {
        scanf("%d", p2);
    }
    
    // 두 배열의 원소를 역방향으로 더하여 출력
    for (p1 = arr1; p1 < arr1 + N; p1++) {
        curIndex = p1 - arr1;  // 포인터 뺄셈으로 현재 인덱스 계산 (0부터 시작)
        
        // arr1의 정방향 값(*p1)과 arr2의 역방향 값(*(arr2 + 역순인덱스))을 더함
        sum = *p1 + *(arr2 + (N - 1 - curIndex));
        
        // 공백이 먼저 출력되는 " %d" 형태로 출력
        printf(" %d", sum);
    }
    
    return 0;
}
