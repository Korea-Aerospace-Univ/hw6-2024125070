#include <stdio.h>

int main(void)
{
    char ch[10];         // 10개의 영문자 저장 배열
    char *p = nullptr;      // 외부 루프 및 입력용 포인터 초기화
    char *q = nullptr;      // 내부 루프용 포인터 초기화
    
    // 10개의 문자 입력 받기
    for (p = ch; p < ch + 10; p++) {
        scanf("%c", p);
    }
    
    char result = '\0';    // 가장 많이 나타난 문자를 저장할 변수
    int maxCount = 0;        // 최대 빈도수 저장 변수
    
    // 빈도수 계산을 위한 중첩 루프
    for (p = ch; p < ch + 10; p++) {
        int count = 0;       // 현재 문자의 빈도수 카운트
        
        for (q = ch; q < ch + 10; q++) {
            // 같은 문자인지 확인
            if (*p == *q) {
                count++;        // 같은 문자일 때 count 수 하나씩 추가
            }
        }
    
        // 더 큰 빈도수의 경우일 때만 갱신
        if (count > maxCount) {
            maxCount = count;     // 빈도가 같은 경우에는 먼저 나온 문자가 출력
            result = *p;         // 현재 포인터 p가 가리키는 문자를 결과에 저장
        }
    }
    // 최종 결과 출력
    printf("%c %d", result, maxCount);
    
    return 0;
}
