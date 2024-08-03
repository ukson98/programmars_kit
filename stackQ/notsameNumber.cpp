#include <vector>
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    deque<int> tmp;
    tmp.push_front(arr[0]);
    for(int i=1; i<arr.size(); i++){
        if (tmp.front() != arr[i]){
            tmp.push_front(arr[i]);
        }
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    answer = {tmp.begin(), tmp.end()};
    reverse(answer.begin(), answer.end());
    return answer;
}
