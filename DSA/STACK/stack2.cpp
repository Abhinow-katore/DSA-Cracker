class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stac;
        int i = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stac.push(s[i]);
            }
            else
            {
                if (!stac.empty())
                {
                    if (stac.top() == '{' && s[i] == '}' ||
                        stac.top() == '[' && s[i] == ']' ||
                        stac.top() == '(' && s[i] == ')')
                    {
                        stac.pop();
                    }
                    else
                        return false;
                }
                else
                    return false;
            }
        }
        if (stac.empty())
        {
            return true;
        }
    }
};
/*

                20. Valid Parentheses
                    leetoce     */