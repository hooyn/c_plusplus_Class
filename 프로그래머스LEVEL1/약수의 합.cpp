//문제 설명
//정수 n을 입력받아 n의 약수를 모두 더한 값을 리턴하는 함수, 
//solution을 완성해주세요.

//제한 사항
//n은 0 이상 3000이하인 정수입니다.

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        if(n%i==0)
        {
            answer+=i;
        }
    }
    return answer;
}
/*
정확성  테스트
테스트 1 〉	통과 (0.01ms, 3.95MB)
테스트 2 〉	통과 (0.01ms, 3.95MB)
테스트 3 〉	통과 (0.01ms, 3.93MB)
테스트 4 〉	통과 (0.01ms, 3.94MB)
테스트 5 〉	통과 (0.01ms, 3.94MB)
테스트 6 〉	통과 (0.01ms, 3.94MB)
테스트 7 〉	통과 (0.01ms, 3.94MB)
테스트 8 〉	통과 (0.01ms, 3.77MB)
테스트 9 〉	통과 (0.01ms, 3.96MB)
테스트 10 〉통과 (0.02ms, 3.94MB)
테스트 11 〉통과 (0.01ms, 3.96MB)
테스트 12 〉통과 (0.01ms, 3.94MB)
테스트 13 〉통과 (0.01ms, 3.93MB)
테스트 14 〉통과 (0.01ms, 3.94MB)
테스트 15 〉통과 (0.01ms, 3.96MB)
테스트 16 〉통과 (0.01ms, 3.93MB)
테스트 17 〉통과 (0.02ms, 3.93MB)*/