#include <iostream>

using namespace std;

int toNumber(char letter)
{
    int ascii = letter;

    if ('A' <= ascii && ascii <= 'Z')
    {
        return ascii - 'A' + 1;
    }
    else if ('a' <= ascii && ascii <= 'z')
    {
        return ascii - 'a' + 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string input;

    while (cin >> input)
    {
        int sum = 0;

        for (int i = 0; i < input.size(); ++i)
        {
            sum += toNumber(input[i]);
        }

        cout << sum << endl;
    }

    return 0;
}
