#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main(int argc, char const* argv[])
{
    unordered_map<string, int> umap;

    ifstream inputFile("Part-1-Input.txt");
    string inputLine;
    vector<string> currentDirectory;

    while (getline(inputFile, inputLine))
    {
        if (inputLine[2] == 'c')
        {
            if (inputLine[5] == '.')
                currentDirectory.pop_back();
            else
                currentDirectory.push_back(inputLine.substr(5, inputLine.length()));
        }
        else
        {
            if (isdigit(inputLine[0]))
            {
                string data;
                for (int i = 0; isdigit(inputLine[i]); i++)
                    data.push_back(inputLine[i]);

                string currentDirectoryTemp;
                for (int i = 0; i < currentDirectory.size(); i++)
                {
                    currentDirectoryTemp += currentDirectory[i];
                    if (umap.find(currentDirectoryTemp) != umap.end())
                        umap[currentDirectoryTemp] += stoi(data);
                    else
                        umap[currentDirectoryTemp] = stoi(data);
                }
            }
        }
    }
    int result = 0;
    for (auto key : umap)
    {
        if (key.second < 100000)
            result += key.second;
    }
    std::cout << result;
    return 0;
}