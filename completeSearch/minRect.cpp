#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> smaller;
    vector<int> bigger;
    for (auto s : sizes) {
        if (s[0] > s[1]){
            smaller.push_back(s[1]);
            bigger.push_back(s[0]);
        }
        else {
            bigger.push_back(s[1]);
            smaller.push_back(s[0]);
        } 
    }
    sort(smaller.begin(), smaller.end(), greater());
    sort(bigger.begin(), bigger.end(), greater());
    answer = smaller[0] * bigger[0];
    return answer;
}