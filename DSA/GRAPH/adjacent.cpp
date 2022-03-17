#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <list>
using namespace std;
class Graph
{
    int V;
    //array of list
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void printAdjList(){
        int D[V];
        int x = 0;
        //Iterate over all vertices
        for (int i = 0; i < V; i++)
        {
            
            int count = 0;
            
            // int D[]
            cout<<"vertex"<<i<<"->";
            for (int nbr:l[i]){
                cout<<nbr<<" ";
                if (nbr<i)
                {
                    count = count+1;
                    
                }
                
                
            }
            D[i] = count;

            cout<<"got it-->"<<D[i]<<"<----";
            cout<<endl;
            

            
        }
        cout << "\nD Element = "
        <<*min_element(D, D + V);
        for (int i = 1; i < V; i++)
            {
                cout<<D[i]<<" ";
            }
            cout<<"\n";
        cout<<*max_element(D, D + V)-*min_element(D, D+V );
        

    }
};

int main()
{
    Graph g(7);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 5);
    
    g.printAdjList();


    return 0;
}