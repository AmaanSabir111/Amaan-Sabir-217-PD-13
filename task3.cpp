#include <iostream>
#include <fstream>
using namespace std;
string morseCode(string input);
main()
{
    string input;
    cout << "Enter the string :";
    getline(cin,input);
    string result=morseCode(input);
    cout<<result;
}
string morseCode(string input)
{
    string code = "";
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == 'A' || input[i]=='a')
        {
            code += ".-";
        }
        if (input[i] == 'B' || input[i]=='b')
        {
            code += "-...";
        }
        if (input[i] == 'C' || input[i]=='c')
        {
            code += "-.-.";
        }
        if (input[i] == 'D' || input[i]=='d')
        {
            code += "-..";
        }
        if (input[i] == 'E' || input[i]=='e')
        {
            code += ".";
        }
        if (input[i] == 'F' || input[i]=='f')
        {
            code += "..-.";
        }
        if (input[i] == 'G' || input[i]=='g')
        {
            code += "--.";
        }
        if (input[i] == 'H' || input[i]=='h')
        {
            code += "....";
        }
        if (input[i] == 'I' || input[i]=='i')
        {
            code += "..";
        }
        if (input[i] == 'J' || input[i]=='j')
        {
            code += ".---";
        }
        if (input[i] == 'K' || input[i]=='k')
        {
            code += "-.-";
        }
        if (input[i] == 'L' || input[i]=='l')
        {
            code += ".-..";
        }
        if (input[i] == 'M' || input[i]=='m')
        {
            code += "--";
        }
        if (input[i] == 'N' || input[i]=='n')
        {
            code += "-.";
        }
        if (input[i] == 'O' || input[i]=='o')
        {
            code += "---";
        }
        if (input[i] == 'P' || input[i]=='p')
        {
            code += ".--.";
        }
        if (input[i] == 'Q' || input[i]=='q')
        {
            code += "--.-";
        }
        if (input[i] == 'R' || input[i]=='r')
        {
            code += ".-.";
        }
        if (input[i] == 'S' || input[i]=='s')
        {
            code += "...";
        }
        if (input[i] == 'T' || input[i]=='t')
        {
            code += "-";
        }
        if (input[i] == 'U' || input[i]=='u')
        {
            code += "..-";
        }
        if (input[i] == 'V' || input[i]=='v')
        {
            code += "...-";
        }
        if (input[i] == 'W' || input[i]=='w')
        {
            code += ".-";
        }
        if (input[i] == 'X' || input[i]=='x')
        {
            code += "-..-";
        }
        if (input[i] == 'Y' || input[i]=='y')
        {
            code += "-.--";
        }
        if (input[i] == 'Z' || input[i]=='z')
        {
            code += "--..";
        }
        if (input[i] == ' ' )
        {
            code += "-.-.-.-";
        }
    }
    return code;
}