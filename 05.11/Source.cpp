#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//5
	ofstream out;
	out.open("CopyText.txt", ios::out | ios::trunc);

	ifstream in;
	in.open("task5.txt", ios::in);

    if (in)
    {
        const int size = 600;
        char buffer[size] = {};
        while (in.getline(buffer, size))
        {
            cout << buffer << endl;
            out << buffer << endl;
        }

        out.close();
        in.close();
    }
    else
    {
        cout << "Could not open the file" << endl;
    }

    ofstream change;
    change.open("task5.txt", ios::out | ios::trunc);

    ifstream from;
    from.open("task5.2.txt", ios::in);

    if (from)
    {
        const int size = 600;
        char buffer[size] = {};

        while (from.getline(buffer, size))
        {
            cout << buffer << endl;
            change << buffer << endl;
        }

        change.close();
        from.close();
    }
    else
    {
        cout << "Could not open the file" << endl;
    }

    ofstream change2;
    change2.open("task5.2.txt", ios::out | ios::trunc);

    ifstream from2;
    from2.open("CopyText.txt", ios::in);

    if (from2)
    {
        const int size = 600;
        char buffer[size] = {};

        while (from2.getline(buffer, size))
        {
            cout << buffer << endl;
            change2 << buffer << endl;
        }

        change2.close();
        from2.close();
    }
    else
    {
        cout << "Could not open the file" << endl;
    }

    //6

}