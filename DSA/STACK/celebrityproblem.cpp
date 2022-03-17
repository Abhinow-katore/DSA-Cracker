class Solution
{
public:
    bool knows(vector<vector<int>> &M, int n, int &a, int &b)
    {
        if (M[a][b] == 0)
        {
            return false;
        }
        else
            return true;
    }
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;
        // step1 push all element in stack
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }
        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if (knows(M, n, a, b))
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        // step3
        // verify remaining one element
        bool rowCheck = false;
        int zeroCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[s.top()][i] == 0)
            {
                zeroCount++;
            }
        }
        if (zeroCount == n)
        {
            rowCheck = true;
        }
        bool colCheck = false;
        int oneCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[i][s.top()] == 1)
            {
                oneCount++;
            }
        }
        if (oneCount == n - 1)
        {
            colCheck = true;
        }
        if (rowCheck == true && colCheck == true)
        {
            return s.top();
        }
        else
            return -1;
    }
};