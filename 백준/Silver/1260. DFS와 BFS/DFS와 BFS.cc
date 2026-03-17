#include <iostream>
#include<string>
#include<stack>
#include<vector>
#include<queue>
using namespace std;

vector<vector<bool>> DFS(int N, int M, int V)
{
	stack<int> st;
	vector<bool>visited(N + 1, false);
	vector<vector<bool>>graph(N + 1, vector<bool>(N + 1));
	for (int i = 0; i < M; i++)
	{
		int from = 0;
		int to = 0;
		cin >> from >> to;
		graph[from][to] = true;
		graph[to][from] = true;
	}
	st.push(V);
	while (!st.empty())
	{
		int result = st.top();
		st.pop();
		if (!visited[result])
		{
			visited[result] = true;
			cout << result << " ";
			for (int i = N; i >= 1; i--)
			{
				if (graph[result][i])
				{
					st.push(i);
				}
			}
		}
	}
	return graph;
}
void BFS(int N, int M, int V,vector<vector<bool>>& graph)
{
	queue<int> q;
	vector<bool>visited(N + 1, false);
	
	q.push(V);
	visited[V] = true;
	while (!q.empty())
	{
		int result = q.front();
		q.pop();
		cout << result << " ";
		for (int i = 1; i <= N; i++)
		{
			if (graph[result][i] && !visited[i])
			{
				q.push(i);
				visited[i] = true;
			}
		}
	}

}

int main() {
	
	int N, M, V;
	cin >> N >> M >> V;
	vector<vector<bool>> graph = DFS(N, M, V);
	cout << endl;
	BFS(N, M, V, graph);

}

