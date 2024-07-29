#include <vector>
#include <set>
#include<iostream>
using namespace std;

int solution(vector<int> nums)
{
    int msize = nums.size() / 2; // 최대로 고를 수 있는 폰켓몬
    int answer = 1;
    set<int> tmp;
    for (int i=0; i<nums.size(); i++){
        int cnt = 1;
        tmp.insert(nums[i]);
        for (int j=i; j<nums.size(); j++){
            if (tmp.find(nums[j]) == tmp.end()){ // 폰켓몬이 없을 경우
                tmp.insert(nums[j]);
                cnt++;
                if (cnt > msize){
                    tmp.clear();
                    break;
                }
                if (tmp.size() >= answer)
                    answer = tmp.size();
            }
        }
    }
    return answer;
}
