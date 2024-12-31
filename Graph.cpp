#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <vector>
#include <stack>
#include <utility> 
#include <algorithm>
using namespace std;
bool findChar(char findCh, vector<char> listChar){
    for(char i: listChar){
        if(findCh== i){
            return true;
        }
    }
    return false;
}
class Graph {
    map<char,list<pair<char,int>>> adjlist;
    public:
    void AddEdge(char v, char u,int w=1){
        adjlist[v].push_back({u,w});
        adjlist[u].push_back({v,w});
    }
    void printf(){
        for(auto i : adjlist){
            cout <<i.first<<"->";
            for( auto j:i.second){
                cout<<  "(" <<j.first<<","<<j.second<<")";
            }
            cout<<endl;
        }
    }
    void BFS(char start){
        queue<char> Queue;
        vector<char> Visited;
        Queue.push(start);
        Visited.push_back(start);
        while(!Queue.empty()){
            char current=Queue.front();
            cout<<current<<", ";
            Queue.pop();
            for(auto nb: adjlist[current]){
                if(!findChar(nb.first,Visited)){
                    Visited.push_back(nb.first);
                    Queue.push(nb.first);
                }
            }
        }
    }
    void DFS(char start){
        stack<char> Stack;
        vector<char> Visited;
        Stack.push(start);
        Visited.push_back(start);
        while(!Stack.empty()){
            char current=Stack.top();
            cout<<current<<", ";
            Stack.pop();
             for (auto nb = adjlist[current].rbegin();nb!=adjlist[current].rend();++nb) {
                if (!findChar(nb->first, Visited)) {
                    Visited.push_back(nb->first);
                    Stack.push(nb->first);
                }
            }
        }
    }
};
int main(){
//List
    Graph graph;
    graph.AddEdge('D', 'B', 1);
    graph.AddEdge('G', 'C', 2);
    graph.AddEdge('A', 'B', 3);
    graph.AddEdge('C', 'I', 4);
    graph.AddEdge('B', 'F', 5); 
    graph.AddEdge('F', 'I', 6);
    graph.AddEdge('C', 'F', 7);
    graph.AddEdge('H', 'A', 8);
    cout<<endl;
    graph.DFS('D');
    cout<<endl;
    graph.BFS('D');

    return 0;
}