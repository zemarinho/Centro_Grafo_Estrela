#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n, cent=0;
        set<int> s;
        for (int i=0; i<edges.size(); i++){
            if (!s.insert(edges[i][0]).second){
                return edges[i][0];
            }
            if (!s.insert(edges[i][1]).second){
                return edges[i][1];
            }
        }
        return -1;
    }
};

int main(){

    return 0;
}