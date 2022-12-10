#include <iostream>
#include <string>
#include <fstream>
#include <unordered_map>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream inputFile("Part-1-Input.txt");
    string inputLine;
    getline(inputFile, inputLine);
    unordered_map<char, int> umap;
    deque<char> deque;
    bool isCorrect = true;

    for (int i = 0; i < 3; i++)
    {
        if (umap.find(inputLine[i]) != umap.end())
            umap[inputLine[i]]++;
        else
            umap[inputLine[i]] = 1;
        deque.push_back(inputLine[i]);
    }

    for (int i = 3; i < inputLine.length(); i++)
    {
        deque.push_back(inputLine[i]);
        if (umap.find(inputLine[i]) != umap.end())
            umap[inputLine[i]]++;
        else
            umap[inputLine[i]] = 1;

        for (auto val : umap)
        {
            if (val.second > 1)
                isCorrect = false;
        }

        if (isCorrect == true)
        {
            std::cout << i + 1;
            break;
        }

        isCorrect = true;
        umap[deque.front()]--;
        deque.pop_front();
    }

    return 0;
}