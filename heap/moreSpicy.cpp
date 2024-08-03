#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto s : scoville){
        pq.push(s);
    }
    int answer = 0;
    while (pq.top() < K){
        if (pq.size() == 1){
            answer = -1;
            break;
        }
        int l1 = pq.top();
        pq.pop();
        int l2 = pq.top();
        pq.pop();
        int tmp = l1 + l2 * 2;
        answer++;
        pq.push(tmp);
    }
    return answer;
}