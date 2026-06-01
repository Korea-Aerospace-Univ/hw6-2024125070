#include <stdio.h>

int main(void)
{
    char arr[10];   // 10개의 영문자 저장 배열
    char *p;        // 입력용 포인터
    char *outer_p = nullptr;  // 외부 루프(기준 문자) 포인터
    char *inner_p = nullptr;  // 내부 루프(비교 문자) 포인터
    
    int maxCount = 0; // 최대 빈도수
    int maxIndex = 0; // 최대 빈도 문자의 인덱스
    
    // 10개 영문자 입력
    for (p = arr; p < arr + 10; p++) {
        scanf("%c", p); 
    }
    
    // 중첩 반복문으로 빈도수 계산
    for (outer_p = arr; outer_p < arr + 10; outer_p++) {
        int curCount = 0; // 현재 문자의 빈도수
        
        for (inner_p = arr; inner_p < arr + 10; inner_p++) {
            if (*outer_p == *inner_p) {
                curCount++; // 문자가 일치하면 카운트 증가
            }
        }
        
        // 기존 최대 빈도보다 크면 업데이트 (동률일 땐 먼저 나온 문자 유지)
        if (curCount > maxCount) {
            maxCount = curCount;
            maxIndex = outer_p - arr; // 포인터 뺄셈으로 인덱스 구함
        }
    }
    
    // 포인터로 배열에 접근하여 결과 출력
    printf("%c %d", arr[maxIndex], maxCount);

    return 0;
}
