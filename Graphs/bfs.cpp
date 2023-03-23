#include <list>
#include <vector>

using namespace std;


void bfs(vector<int> g[], int n, int start){
		bool visited[n];
		for(int i = 0; i < n; i++){
				visited[i] = false;
		}
		list<int> q;
		q.push_back(start);
		visited[start] = true;
		while(!q.empty()){
				int curr = q.front();
				q.pop_back();

				for(int i = 0; i < g[curr].size(); i++){
						int adj = g[curr][i];
						if(!visited[adj]){
								visited[adj] = true;
								q.push_back(adj);
						}
				}
		}
}

