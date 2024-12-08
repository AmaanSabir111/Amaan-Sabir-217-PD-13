#include <iostream>
#include <fstream>
using namespace std;
void appendFunction(string str);
main()
{
    fstream file;
    string str;
    file.open("alphabets.txt", ios::in);
    file >> str;
    file.close();
    appendFunction(str);
}
void appendFunction(string str)
{
    bool available;
    fstream file;
    file.open("alphabets.txt", ios::app);
    file<<endl;
    string all = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0;i<26; i++){
        available=false;
        for (int j=0;str[j]!='\0';j++){
            if (str[j] == all[i])
        {
            available=true;
            break;
        }
        }
        if(!available){
            file<<all[i];
        }
    }
}