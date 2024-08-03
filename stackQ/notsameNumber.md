#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) 
{

    arr.erase(unique(arr.begin(), arr.end()),arr.end());

    vector<int> answer = arr;
    return answer;
}
#unique를 사용하면, 인접한 중복값을 지우고 정리해서 iterator를 정리한곳 끝으로 이동시켜줌.
