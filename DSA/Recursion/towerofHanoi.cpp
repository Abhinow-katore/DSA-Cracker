#include <bits\stdc++.h>
#include <stdio.h>
using namespace std;

void towerofHanoi(int start, int end, char source, char aux, char destination)
{
    if (start > end)
    {
        return;
    }
    towerofHanoi(start, end - 1, source, destination, aux);
    cout << "move disk" << end << "from " << source << " to " << destination << "\n";
    towerofHanoi(start, end - 1, aux, source, destination);

}

int main()
{
    // int start = 1;
    // int end = 2;
    // char source, destination, aux;
    // cin >> source >> destination >> aux;
    towerofHanoi(1,3,'1','2','3');

    return 0;
}