#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//5
	/*ofstream out;
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
    }*/

    //6

    ofstream result;
    result.open("Result.txt", ios::out | ios::app);

    ifstream part1("Part1.txt");
    ifstream part2("Part2.txt");
    ifstream part3("Part3.txt");
    ifstream part4("Part4.txt");

    const int size = 600;
    char buffer[size] = {};

    for (int i = 0; i < 4; i++)
    {
        if (i == 0 && part1.is_open())
        {
            while (part1.getline(buffer, size))
            {
                cout << buffer << endl;
                result << buffer << endl;
            }
            part1.close();
        }
        else if (i == 1 && part2.is_open())
        {
            while (part2.getline(buffer, size))
            {
                cout << buffer << endl;
                result << buffer << endl;
            }
            part2.close();
        }
        else if (i == 2 && part3.is_open())
        {
            while (part3.getline(buffer, size))
            {
                cout << buffer << endl;
                result << buffer << endl;
            }
            part3.close();
        }
        else if (i == 3 && part4.is_open())
        {
            while (part4.getline(buffer, size))
            {
                cout << buffer << endl;
                result << buffer << endl;
            }
            part4.close();
        }
    }
    result.close();
   //7
   
}