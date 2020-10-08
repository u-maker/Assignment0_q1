#include <iostream>
#include <fstream>
using namespace std;
bool isVowel(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
        {
            return true;
        }
    }
    return false;
}
void reverseStr(string &str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

// driver code
int main(int argc, char *argv[])
{
    // filestream variable file
    fstream file;
    string word, filename;

    // filename of the file
    filename = argv[1];

    // opening file
    file.open(filename.c_str());

    // extracting words from the file
    while (file >> word)
    {
        // displaying content
        if (isVowel(word))
        {
            reverseStr(word);
            cout << word << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}
