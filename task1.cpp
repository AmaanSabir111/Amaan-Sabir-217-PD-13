#include <iostream>
#include <fstream>
using namespace std;
string getField(string record, int field);
main()
{
    string name = "";
    int age = 0;
    fstream file;
    file.open("names.txt");
    string line;
    while (!file.eof())
    {
        getline(file, line);
        name = getField(line, 1);
        age = stoi(getField(line, 2));
    }
    string result;
    if (age % 2 == 0)
    {
        result = "####################\n# " + to_string(age) + " HB " + name + " !" + to_string(age) + " #" + "\n" + "####################";
    }
    else
    {
        result = "********************\n* " + to_string(age) + " HB " + name + " !" + to_string(age) + " *" + "\n" + "********************";
    }

    file.close();
    fstream file2;
    file2.open("final.txt", ios::out);
    file2 << result;
}
string getField(string record, int field)
{
    int commaCount = 1;
    string item;
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')

        {
            commaCount = commaCount + 1;
        }

        else if (commaCount == field)
        {
            item = item + record[x];
        }
    }
    return item;
}