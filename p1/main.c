#include <stdio.h>

int main() {
    int N;
    스타일 배열 초기화 
    int arr1[20] = {}; 
    int arr2[20] = {};

    // 정수 N 입력 (1 <= N <= 20)
    scanf("%d", &N);

    // 첫 번째 배열 입력
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr1[i]);
    }

    // 두 번째 배열 입력
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr2[i]);
    }

    // nullptr 초기화 및 포인터 연결 
    int *p = nullptr;
    int *q = nullptr;

    p = arr1;            // 첫 번째 배열의 시작 주소 (arr1[0]의 주소) [cite: 742]
    q = arr2 + (N - 1);  // 두 번째 배열의 마지막 원소 주소 

    // N번 반복하며 역방향 원소 합산 출력
    for (int i = 0; i < N; i++) {
        // 참조 연산자(*)로 값을 가져와 덧셈 [cite: 746]
        int sum = *p + *q;
        
        // 과제 필수 주의사항: 공백이 먼저 출력되는 형태 (" %d") 
        printf(" %d", sum); 
        
        // 포인터 주소 증감 연산으로 다음 위치 이동 [cite: 774, 1028]
        p++; // 첫 번째 배열은 정방향으로 주소 증가 [cite: 965]
        q--; // 두 번째 배열은 역방향으로 주소 감소
    }
    printf("\n");

    return 0;
}
