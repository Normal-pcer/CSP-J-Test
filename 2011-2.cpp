// WTF?!
#include <iostream>

using namespace std;
string tolower(string str);

int main(int argc, char const *argv[])
{
    string target;
    string article[10005];
    string *top = article;
    bool flag = false;
    int count = 0, firstPos = -1;

    cin >> target;

    char c = '\0';
    do
    {
        c = getchar();
        if (c == ' ')
        {
            if (*top != "")
                top++;
        }
        else if (c == '\n')
        {
            if (flag)
                break;
            else
                flag = true;
        }
        else if (flag == false)
        {
            continue;
        }
        else
        {
            *top += c;
        }
    } while (1);

    // 遍历所有单词
    for (string *index = article; index <= top; index++)
    {
        if (tolower(*index) == tolower(target))
        {
            count++;
            if (firstPos == -1)
                firstPos = index - article;
        }
    }
    if (count != 0)
        cout << count << " " << firstPos;
    else
        cout << -1;
}

string tolower(string str)
{
    string result = "";
    for (int index = 0; index < str.size(); index++)
    {
        if ('A' <= str[index] && 'Z' >= str[index])
            result += str[index] - 'A' + 'a';
        else
            result += str[index];
    }
    return result;
}