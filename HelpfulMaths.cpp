#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    printf("Enter the string: ");
    cin >>str;
    for (int i = 0; i <str.size(); i+=2)
    {
        int min=i;
        for (int j = i + 2; j <str.size(); j+=2)
        {
            if(str[min]> str[j])
            min=j;
        }
        if (min !=i )
        {
            swap(str[i], str[min]);
        }
    }
    cout << str << endl;
}