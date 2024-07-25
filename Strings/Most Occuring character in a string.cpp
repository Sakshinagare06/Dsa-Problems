char getMaxChar(string s)
{

    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    int finalAns = ans + 'a';
    return finalAns;
}

int main(){
    string s;
    cin >> s;
    cout << getMaxChar(s);

    return 0;
}
