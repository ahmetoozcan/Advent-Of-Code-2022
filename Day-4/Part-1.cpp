#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[])
{
    std::ifstream inputFile("Part-1-Input.txt");
    string inputLine;
    int count = 0;

    while (getline(inputFile, inputLine))
    {
        string firstElfFirst, firstElfSecond, secondElfFirst, secondElfSecond;

        for (int i = 0; i < inputLine.length(); i++)
        {
            while (inputLine[i] != '-')
                firstElfFirst.push_back(inputLine[i]), i++;
            i++;
            while (inputLine[i] != ',')
                firstElfSecond.push_back(inputLine[i]), i++;
            i++;
            while (inputLine[i] != '-')
                secondElfFirst.push_back(inputLine[i]), i++;
            i++;
            while (inputLine[i] != '\0')
                secondElfSecond.push_back(inputLine[i]), i++;
            break;
        }

        if ((stoi(firstElfFirst) <= stoi(secondElfFirst) && stoi(secondElfSecond) <= stoi(firstElfSecond)))
            count++;
        else if ((stoi(firstElfFirst) >= stoi(secondElfFirst) && stoi(secondElfSecond) >= stoi(firstElfSecond)))
            count++;
    }

    std::cout << count;

    return 0;
}