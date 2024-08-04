#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> students(n+1, 1);
    for (auto l : lost){
        students[l] -= 1;
    }
    for (auto r : reserve){
        students[r] += 1;
    }
    for (int i=1; i<=n; i++){
        if (students[i] == 0){
            if (i > 1 && students[i-1] == 2){// 이전사람이 체육복 가지고있는 경우
                students[i-1] -= 1;
                students[i] += 1;
            }
            else if (i < n && students[i+1] ==2){
                students[i+1] -=1;
                students[i] += 1;
            }
        }
    }
    for (int i=1; i<=n; i++){
        if (students[i] >= 1){
            answer++;
        }
    }
    return answer;
}