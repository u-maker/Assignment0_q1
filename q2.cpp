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
struct student
{
    string name;
    string rollno;
    string mail;

    /* data */
};

// driver code
int main(int argc, char *argv[])
{
    fstream file;
    student myVar, fellow1, fellow2;
    string filename;
    int actionType = -1;
    cout << " enter 1 to insert \n enter 2 to read \n enter 3 to delete \n enter 0 to exit \n >>>> ";
    cin >> actionType;
    if (actionType == 0)
    {
        return 0;
    }
    else if (actionType == 1)
    {
        //insert
        cout << " Enter your name: \n >>>> ";
        cin >> myVar.name;
        cout << " Enter your mail: \n >>>> ";
        cin >> myVar.mail;
        cout << " Enter your roll no: \n >>>> ";
        cin >> myVar.rollno;

        cout << " Enter your 1st fellow's name: \n >>>> ";
        cin >> fellow1.name;
        cout << " Enter your 1st fellow's  mail: \n >>>> ";
        cin >> fellow1.mail;
        cout << " Enter your  1st fellow's roll no: \n >>>> ";
        cin >> fellow1.rollno;

        cout << " Enter your 2nd fellow's name: \n >>>> ";
        cin >> fellow2.name;
        cout << " Enter your 2nd fellow's mail: \n >>>> ";
        cin >> fellow2.mail;
        cout << " Enter your 2nd fellow's roll no: \n >>>> ";
        cin >> fellow2.rollno;

        filename = "data.txt";
        file.open(filename.c_str(), ios::out);

        file << myVar.name << "\n";
        file << myVar.mail << "\n";
        file << myVar.rollno << "\n";
        file << fellow1.name << "\n";
        file << fellow1.mail << "\n";
        file << fellow1.rollno << "\n";
        file << fellow2.name << "\n";
        file << fellow2.mail << "\n";
        file << fellow2.rollno << "\n";
        file.close();
        cout << "All data is stored in " << filename << endl;
    }
    else if (actionType == 2)
    {
        try
        {
            filename = "data.txt";
            file.open(filename.c_str());

            file >> myVar.name;
            file >> myVar.mail;
            file >> myVar.rollno;
            file >> fellow1.name;
            file >> fellow1.mail;
            file >> fellow1.rollno;
            file >> fellow2.name;
            file >> fellow2.mail;
            file >> fellow2.rollno;
            file.close();
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        cout << " enter 1 to read your data \n enter 2 to read data of first fellow \n enter 3 to read data of 2nd fellow \n enter 0 to exit \n >>>> ";
        cin >> actionType;
        if (actionType == 0)
        {
            return 0;
        }
        else if (actionType == 1)
        {
            //myVar
            cout << " name: " << myVar.name;
            cout << " mail: " << myVar.mail;
            cout << " roll no: " << myVar.rollno;
        }
        else if (actionType == 2)
        {
            // 1st
            cout << " name: " << fellow1.name;
            cout << " mail: " << fellow1.mail;
            cout << " roll no: " << fellow1.rollno;
        }
        else if (actionType == 3)
        {
            // 2nd
            cout << " name: " << fellow2.name;
            cout << " mail: " << fellow2.mail;
            cout << " roll no: " << fellow2.rollno;
        }
        //read
    }
    else if (actionType == 3)
    {
        try
        {
            filename = "data.txt";
            file.open(filename.c_str());

            file >> myVar.name;
            file >> myVar.mail;
            file >> myVar.rollno;
            file >> fellow1.name;
            file >> fellow1.mail;
            file >> fellow1.rollno;
            file >> fellow2.name;
            file >> fellow2.mail;
            file >> fellow2.rollno;
            file.close();
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        cout << " enter 1 to delete your data \n enter 2 to delete data of first fellow \n enter 3 to delete data of 2nd fellow \n enter 0 to exit \n >>>> ";
        cin >> actionType;
        if (actionType == 0)
        {
            return 0;
        }
        else if (actionType == 1)
        {
            //myVar
            myVar.name = "none";
            myVar.mail = "none";
            myVar.rollno = "none";
        }
        else if (actionType == 2)
        {
            // 1st
            fellow1.name = "none";
            fellow1.mail = "none";
            fellow1.rollno = "none";
        }
        else if (actionType == 3)
        {
            // 2nd
            fellow2.name = "none";
            fellow2.mail = "none";
            fellow2.rollno = "none";
        }
        filename = "data.txt";
        file.open(filename.c_str(), ios::out);

        file << myVar.name << "\n";
        file << myVar.mail << "\n";
        file << myVar.rollno << "\n";
        file << fellow1.name << "\n";
        file << fellow1.mail << "\n";
        file << fellow1.rollno << "\n";
        file << fellow2.name << "\n";
        file << fellow2.mail << "\n";
        file << fellow2.rollno << "\n";
        file.close();
    }

    return 0;
}
