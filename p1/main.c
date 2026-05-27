#include <stdio.h>

int main() {
    char arr[11];
    // 10개의 문자와 널 문자('\0')를 고려한 배열 선언
    
    // 10개의 영문자 입력받기 (문자열 형식 %s로 안전하게 입력)
    scanf("%s", arr);
    
    char max_char = arr[0]; // 가장 많이 나타난 문자를 저장할 변수 (초기값은 첫 번째 문자)
    int max_count = 0;      // 최대 빈도수를 저장할 변수
    
    // 힌트에 제공된 포인터 기반 중첩 반복문 구조 사용
    // 외부 포인터 p: 기준이 되는 문자를 가리킴
    for (char *p = arr; p < arr + 10; p++) {
        int current_count = 0; // 현재 가리키고 있는 문자(*p)의 빈도수 카운트
        
        // 내부 포인터 q: 배열 전체를 돌며 *p와 같은 문자가 있는지 확인
        for (char *q = arr; q < arr + 10; q++) {
            if (*p == *q) {
                current_count++;
            }
        }
        
        // > 조건을 사용하여 빈도수가 같을 때는 먼저 나타난 문자(*p)가 유지되도록 함
        if (current_count > max_count) {
            max_count = current_count;
            max_char = *p;
        }
    }
    
    // 3. 결과 출력
    printf("%c %d\n", max_char, max_count);
    
    return 0;
}
