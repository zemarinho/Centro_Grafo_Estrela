#include <iostream>
#include <vector>
#include <set>
using namespace std;

<<<<<<< HEAD
//RETORNA O NÓ CENTRAL DE UM GRAFO EM ESTRELA
=======
>>>>>>> 7f370c249a2ce5964888179539daffc9d1f74b6c
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