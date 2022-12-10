#include <iostream>
#include <string>
#include <fstream>
#include <set>
#include <utility>

void check(int cycle, int x, std::set<std::pair<int, int>>& set) {
    switch (cycle)
    {
    case 20:
        set.insert({ 20,x * cycle });
        break;
    case 60:
        set.insert({ 60,x * cycle });
        break;
    case 100:
        set.insert({ 100,x * cycle });
        break;
    case 140:
        set.insert({ 140,x * cycle });
        break;
    case 180:
        set.insert({ 180,x * cycle });
        break;
    case 220:
        set.insert({ 220,x * cycle });
        break;
    default:
        break;
    }
}

int main(int argc, char const* argv[])
{
    int x = 1;
    int cycle = 1;
    int result = 0;
    std::set<std::pair<int, int>> set;

    std::ifstream inputFile("input.txt");
    std::string inputLine;

    while (getline(inputFile, inputLine)) {
        if (inputLine[0] == 'n') {
            check(cycle, x, set);
            cycle++;
            check(cycle, x, set);
        }
        else {
            std::string num;
            for (int i = 5; i < inputLine.length(); i++) {
                num.push_back(inputLine[i]);
            }
            check(cycle, x, set);
            cycle++;
            check(cycle, x, set);
            cycle++;
            x += stoi(num);
            check(cycle, x, set);
        }
    }
    for (auto& key : set) {
        std::cout << key.first << " " << key.second << std::endl;
        result += key.second;
    }
    std::cout << result;

    return 0;
}