#include <iostream>
#include <fstream>
#include <utility>
#include <string>
#include <set>
#include <unordered_map>

std::pair<int, int> func(std::pair<int, int>& head, std::pair<int, int>& tail)
{
    std::pair<int, int> newPair;
    newPair.first = 0;
    newPair.second = 0;
    if (abs(head.first - tail.first) > 1 && abs(head.second - tail.second) > 1) {
        if (head.first > tail.first)
            newPair.first = head.first - 1;
        else
            newPair.first = head.first + 1;
        if (head.second > tail.second)
            newPair.second = head.second - 1;
        else
            newPair.second = head.second + 1;
        return newPair;
    }
    else if (abs(head.second - tail.second) > 1) {
        newPair.first = head.first;
        if (head.second > tail.second)
            newPair.second = head.second - 1;
        else
            newPair.second = head.second + 1;
        return newPair;
    }
    else if (abs(head.first - tail.first) > 1) {
        newPair.second = head.second;
        if (head.first > tail.first)
            newPair.first = head.first - 1;
        else
            newPair.first = head.first + 1;
        return newPair;
    }

    return tail;
}

int main(int argc, char const* argv[])
{
    std::set<std::pair<int, int>> set;
    std::unordered_map<int, std::pair<int, int>> tails;
    std::pair<int, int> head;
    head.first = 0;
    head.second = 0;

    for (int i = 1; i < 10; i++)
    {
        tails[i].first = 0;
        tails[i].second = 0;
    }

    std::ifstream inputFile("input.txt");
    int steps;
    char direction;

    while (inputFile >> direction >> steps) {
        for (int i = 0; i < steps; i++) {
            if (direction == 'R') {
                head.second++;
                tails[1] = func(head, tails[1]);
                for (int j = 2; j < 10; j++)
                    tails[j] = func(tails[j - 1], tails[j]);
            }
            else if (direction == 'L') {
                head.second--;
                tails[1] = func(head, tails[1]);
                for (int j = 2; j < 10; j++)
                    tails[j] = func(tails[j - 1], tails[j]);
            }
            else if (direction == 'U') {
                head.first--;
                tails[1] = func(head, tails[1]);
                for (int j = 2; j < 10; j++)
                    tails[j] = func(tails[j - 1], tails[j]);
            }
            else if (direction == 'D') {
                head.first++;
                tails[1] = func(head, tails[1]);
                for (int j = 2; j < 10; j++)
                    tails[j] = func(tails[j - 1], tails[j]);
            }
            set.insert(tails[9]);
        }
    }
    std::cout << set.size();


    return 0;
}