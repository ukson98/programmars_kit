# 오류가 났던 코드
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
                //cout << "nums[" << i << "]= "<< nums[i] << " nums[" << j << "]= "<< nums[j] << "not match\n";
                cnt++;
                if (cnt == msize){
                    answer = cnt;
                    i = j;
                    tmp.clear();
                    break;
                }
               	if (cnt >= answer)
                    answer = cnt;
            }
        }
    }
    return answer;
}

# 간단한 풀이
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int msize = nums.size() / 2;
    set<int> tmp(nums.begin(), nums.end());
    int sizes = tmp.size();
    answer = min(sizes, msize);
    return answer;
}
