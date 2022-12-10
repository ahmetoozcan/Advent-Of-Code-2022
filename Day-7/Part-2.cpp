#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<string, int> umap;

    ifstream inputFile("Part-2-Input.txt");
    string inputLine;
    vector<string> currentDirectory;
    while (getline(inputFile, inputLine))
    {
        if (inputLine[2] == 'c')
        {
            if (inputLine[5] == '.')
                currentDirectory.pop_back();
            else
                currentDirectory.push_back(inputLine.substr(5));
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

    int neededUnusedSpace = 70000000 - 30000000;
    int usedSpace = umap["/"];
    int result = 0;
    int minFileSizeToDelete = INT_MAX;
    for (auto key : umap)
    {
        if (usedSpace - key.second < neededUnusedSpace)
            if (key.second < minFileSizeToDelete)
                minFileSizeToDelete = key.second;
    }
    std::cout << minFileSizeToDelete;
    return 0;
}