#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream inputFile("Part-1-Input.txt");
    string inputLine;
    vector<char> arr1 = {'D', 'B', 'J', 'V'};
    vector<char> arr2 = {'P', 'V', 'B', 'W', 'R', 'D', 'F'};
    vector<char> arr3 = {'R', 'G', 'F', 'L', 'D', 'C', 'W', 'Q'};
    vector<char> arr4 = {'W', 'J', 'P', 'M', 'L', 'N', 'D', 'B'};
    vector<char> arr5 = {'H', 'N', 'B', 'P', 'C', 'S', 'Q'};
    vector<char> arr6 = {'R', 'D', 'B', 'S', 'N', 'G'};
    vector<char> arr7 = {'Z', 'B', 'P', 'M', 'Q', 'F', 'S', 'H'};
    vector<char> arr8 = {'W', 'L', 'F'};
    vector<char> arr9 = {'S', 'V', 'F', 'M', 'R'};
    while (getline(inputFile, inputLine))
    {
        int first, howMany, second;
        stringstream ss(inputLine);
        ss >> howMany >> first >> second;

        if (first == 1)
        {
            if (second == 2)
                for (int i = 0; i < howMany; i++)
                {
                    arr2.push_back(arr1[arr1.size() - 1]);
                    arr1.pop_back();
                }
            else if (second == 3)
                for (int i = 0; i < howMany; i++)
                {
                    arr3.push_back(arr1[arr1.size() - 1]);
                    arr1.pop_back();
                }
            else if (second == 4)
                for (int i = 0; i < howMany; i++)
                {
                    arr4.push_back(arr1[arr1.size() - 1]);
                    arr1.pop_back();
                }
            else if (second == 5)
                for (int i = 0; i < howMany; i++)
                {
                    arr5.push_back(arr1[arr1.size() - 1]);
                    arr1.pop_back();
                }
            else if (second == 6)
                for (int i = 0; i < howMany; i++)
                {
                    arr6.push_back(arr1[arr1.size() - 1]);
                    arr1.pop_back();
                }
            else if (second == 7)
                for (int i = 0; i < howMany; i++)
                {
                    arr7.push_back(arr1[arr1.size() - 1]);
                    arr1.pop_back();
                }
            else if (second == 8)
                for (int i = 0; i < howMany; i++)
                {
                    arr8.push_back(arr1[arr1.size() - 1]);
                    arr1.pop_back();
                }
            else if (second == 9)
                for (int i = 0; i < howMany; i++)
                {
                    arr9.push_back(arr1[arr1.size() - 1]);
                    arr1.pop_back();
                }
        }
        else if (first == 2)
        {
            if (second == 1)
                for (int i = 0; i < howMany; i++)
                {
                    arr1.push_back(arr2[arr2.size() - 1]);
                    arr2.pop_back();
                }
            else if (second == 3)
                for (int i = 0; i < howMany; i++)
                {
                    arr3.push_back(arr2[arr2.size() - 1]);
                    arr2.pop_back();
                }
            else if (second == 4)
                for (int i = 0; i < howMany; i++)
                {
                    arr4.push_back(arr2[arr2.size() - 1]);
                    arr2.pop_back();
                }
            else if (second == 5)
                for (int i = 0; i < howMany; i++)
                {
                    arr5.push_back(arr2[arr2.size() - 1]);
                    arr2.pop_back();
                }
            else if (second == 6)
                for (int i = 0; i < howMany; i++)
                {
                    arr6.push_back(arr2[arr2.size() - 1]);
                    arr2.pop_back();
                }
            else if (second == 7)
                for (int i = 0; i < howMany; i++)
                {
                    arr7.push_back(arr2[arr2.size() - 1]);
                    arr2.pop_back();
                }
            else if (second == 8)
                for (int i = 0; i < howMany; i++)
                {
                    arr8.push_back(arr2[arr2.size() - 1]);
                    arr2.pop_back();
                }
            else if (second == 9)
                for (int i = 0; i < howMany; i++)
                {
                    arr9.push_back(arr2[arr2.size() - 1]);
                    arr2.pop_back();
                }
        }
        else if (first == 3)
        {
            if (second == 1)
                for (int i = 0; i < howMany; i++)
                {
                    arr1.push_back(arr3[arr3.size() - 1]);
                    arr3.pop_back();
                }
            else if (second == 2)
                for (int i = 0; i < howMany; i++)
                {
                    arr2.push_back(arr3[arr3.size() - 1]);
                    arr3.pop_back();
                }
            else if (second == 4)
                for (int i = 0; i < howMany; i++)
                {
                    arr4.push_back(arr3[arr3.size() - 1]);
                    arr3.pop_back();
                }
            else if (second == 5)
                for (int i = 0; i < howMany; i++)
                {
                    arr5.push_back(arr3[arr3.size() - 1]);
                    arr3.pop_back();
                }
            else if (second == 6)
                for (int i = 0; i < howMany; i++)
                {
                    arr6.push_back(arr3[arr3.size() - 1]);
                    arr3.pop_back();
                }
            else if (second == 7)
                for (int i = 0; i < howMany; i++)
                {
                    arr7.push_back(arr3[arr3.size() - 1]);
                    arr3.pop_back();
                }
            else if (second == 8)
                for (int i = 0; i < howMany; i++)
                {
                    arr8.push_back(arr3[arr3.size() - 1]);
                    arr3.pop_back();
                }
            else if (second == 9)
                for (int i = 0; i < howMany; i++)
                {
                    arr9.push_back(arr3[arr3.size() - 1]);
                    arr3.pop_back();
                }
        }
        else if (first == 4)
        {
            if (second == 1)
                for (int i = 0; i < howMany; i++)
                {
                    arr1.push_back(arr4[arr4.size() - 1]);
                    arr4.pop_back();
                }
            else if (second == 2)
                for (int i = 0; i < howMany; i++)
                {
                    arr2.push_back(arr4[arr4.size() - 1]);
                    arr4.pop_back();
                }
            else if (second == 3)
                for (int i = 0; i < howMany; i++)
                {
                    arr3.push_back(arr4[arr4.size() - 1]);
                    arr4.pop_back();
                }
            else if (second == 5)
                for (int i = 0; i < howMany; i++)
                {
                    arr5.push_back(arr4[arr4.size() - 1]);
                    arr4.pop_back();
                }
            else if (second == 6)
                for (int i = 0; i < howMany; i++)
                {
                    arr6.push_back(arr4[arr4.size() - 1]);
                    arr4.pop_back();
                }
            else if (second == 7)
                for (int i = 0; i < howMany; i++)
                {
                    arr7.push_back(arr4[arr4.size() - 1]);
                    arr4.pop_back();
                }
            else if (second == 8)
                for (int i = 0; i < howMany; i++)
                {
                    arr8.push_back(arr4[arr4.size() - 1]);
                    arr4.pop_back();
                }
            else if (second == 9)
                for (int i = 0; i < howMany; i++)
                {
                    arr9.push_back(arr4[arr4.size() - 1]);
                    arr4.pop_back();
                }
        }
        else if (first == 5)
        {
            if (second == 1)
                for (int i = 0; i < howMany; i++)
                {
                    arr1.push_back(arr5[arr5.size() - 1]);
                    arr5.pop_back();
                }
            else if (second == 2)
                for (int i = 0; i < howMany; i++)
                {
                    arr2.push_back(arr5[arr5.size() - 1]);
                    arr5.pop_back();
                }
            else if (second == 3)
                for (int i = 0; i < howMany; i++)
                {
                    arr3.push_back(arr5[arr5.size() - 1]);
                    arr5.pop_back();
                }
            else if (second == 4)
                for (int i = 0; i < howMany; i++)
                {
                    arr4.push_back(arr5[arr5.size() - 1]);
                    arr5.pop_back();
                }
            else if (second == 6)
                for (int i = 0; i < howMany; i++)
                {
                    arr6.push_back(arr5[arr5.size() - 1]);
                    arr5.pop_back();
                }
            else if (second == 7)
                for (int i = 0; i < howMany; i++)
                {
                    arr7.push_back(arr5[arr5.size() - 1]);
                    arr5.pop_back();
                }
            else if (second == 8)
                for (int i = 0; i < howMany; i++)
                {
                    arr8.push_back(arr5[arr5.size() - 1]);
                    arr5.pop_back();
                }
            else if (second == 9)
                for (int i = 0; i < howMany; i++)
                {
                    arr9.push_back(arr5[arr5.size() - 1]);
                    arr5.pop_back();
                }
        }
        else if (first == 6)
        {
            if (second == 1)
                for (int i = 0; i < howMany; i++)
                {
                    arr1.push_back(arr6[arr6.size() - 1]);
                    arr6.pop_back();
                }
            else if (second == 2)
                for (int i = 0; i < howMany; i++)
                {
                    arr2.push_back(arr6[arr6.size() - 1]);
                    arr6.pop_back();
                }
            else if (second == 3)
                for (int i = 0; i < howMany; i++)
                {
                    arr3.push_back(arr6[arr6.size() - 1]);
                    arr6.pop_back();
                }
            else if (second == 4)
                for (int i = 0; i < howMany; i++)
                {
                    arr4.push_back(arr6[arr6.size() - 1]);
                    arr6.pop_back();
                }
            else if (second == 5)
                for (int i = 0; i < howMany; i++)
                {
                    arr5.push_back(arr6[arr6.size() - 1]);
                    arr6.pop_back();
                }
            else if (second == 7)
                for (int i = 0; i < howMany; i++)
                {
                    arr7.push_back(arr6[arr6.size() - 1]);
                    arr6.pop_back();
                }
            else if (second == 8)
                for (int i = 0; i < howMany; i++)
                {
                    arr8.push_back(arr6[arr6.size() - 1]);
                    arr6.pop_back();
                }
            else if (second == 9)
                for (int i = 0; i < howMany; i++)
                {
                    arr9.push_back(arr6[arr6.size() - 1]);
                    arr6.pop_back();
                }
        }
        else if (first == 7)
        {
            if (second == 1)
                for (int i = 0; i < howMany; i++)
                {
                    arr1.push_back(arr7[arr7.size() - 1]);
                    arr7.pop_back();
                }
            else if (second == 2)
                for (int i = 0; i < howMany; i++)
                {
                    arr2.push_back(arr7[arr7.size() - 1]);
                    arr7.pop_back();
                }
            else if (second == 3)
                for (int i = 0; i < howMany; i++)
                {
                    arr3.push_back(arr7[arr7.size() - 1]);
                    arr7.pop_back();
                }
            else if (second == 4)
                for (int i = 0; i < howMany; i++)
                {
                    arr4.push_back(arr7[arr7.size() - 1]);
                    arr7.pop_back();
                }
            else if (second == 5)
                for (int i = 0; i < howMany; i++)
                {
                    arr5.push_back(arr7[arr7.size() - 1]);
                    arr7.pop_back();
                }
            else if (second == 6)
                for (int i = 0; i < howMany; i++)
                {
                    arr6.push_back(arr7[arr7.size() - 1]);
                    arr7.pop_back();
                }
            else if (second == 8)
                for (int i = 0; i < howMany; i++)
                {
                    arr8.push_back(arr7[arr7.size() - 1]);
                    arr7.pop_back();
                }
            else if (second == 9)
                for (int i = 0; i < howMany; i++)
                {
                    arr9.push_back(arr7[arr7.size() - 1]);
                    arr7.pop_back();
                }
        }
        else if (first == 8)
        {
            if (second == 1)
                for (int i = 0; i < howMany; i++)
                {
                    arr1.push_back(arr8[arr8.size() - 1]);
                    arr8.pop_back();
                }
            else if (second == 2)
                for (int i = 0; i < howMany; i++)
                {
                    arr2.push_back(arr8[arr8.size() - 1]);
                    arr8.pop_back();
                }
            else if (second == 3)
                for (int i = 0; i < howMany; i++)
                {
                    arr3.push_back(arr8[arr8.size() - 1]);
                    arr8.pop_back();
                }
            else if (second == 4)
                for (int i = 0; i < howMany; i++)
                {
                    arr4.push_back(arr8[arr8.size() - 1]);
                    arr8.pop_back();
                }
            else if (second == 5)
                for (int i = 0; i < howMany; i++)
                {
                    arr5.push_back(arr8[arr8.size() - 1]);
                    arr8.pop_back();
                }
            else if (second == 6)
                for (int i = 0; i < howMany; i++)
                {
                    arr6.push_back(arr8[arr8.size() - 1]);
                    arr8.pop_back();
                }
            else if (second == 7)
                for (int i = 0; i < howMany; i++)
                {
                    arr7.push_back(arr8[arr8.size() - 1]);
                    arr8.pop_back();
                }
            else if (second == 9)
                for (int i = 0; i < howMany; i++)
                {
                    arr9.push_back(arr8[arr8.size() - 1]);
                    arr8.pop_back();
                }
        }
        else if (first == 9)
        {
            if (second == 1)
                for (int i = 0; i < howMany; i++)
                {
                    arr1.push_back(arr9[arr9.size() - 1]);
                    arr9.pop_back();
                }
            else if (second == 2)
                for (int i = 0; i < howMany; i++)
                {
                    arr2.push_back(arr9[arr9.size() - 1]);
                    arr9.pop_back();
                }
            else if (second == 3)
                for (int i = 0; i < howMany; i++)
                {
                    arr3.push_back(arr9[arr9.size() - 1]);
                    arr9.pop_back();
                }
            else if (second == 4)
                for (int i = 0; i < howMany; i++)
                {
                    arr4.push_back(arr9[arr9.size() - 1]);
                    arr9.pop_back();
                }
            else if (second == 5)
                for (int i = 0; i < howMany; i++)
                {
                    arr5.push_back(arr9[arr9.size() - 1]);
                    arr9.pop_back();
                }
            else if (second == 6)
                for (int i = 0; i < howMany; i++)
                {
                    arr6.push_back(arr9[arr9.size() - 1]);
                    arr9.pop_back();
                }
            else if (second == 7)
                for (int i = 0; i < howMany; i++)
                {
                    arr7.push_back(arr9[arr9.size() - 1]);
                    arr9.pop_back();
                }
            else if (second == 8)
                for (int i = 0; i < howMany; i++)
                {
                    arr8.push_back(arr9[arr9.size() - 1]);
                    arr9.pop_back();
                }
        }
    }

    std::cout << arr1[arr1.size() - 1] << arr2[arr2.size() - 1] << arr3[arr3.size() - 1] << arr4[arr4.size() - 1] << arr5[arr5.size() - 1] << arr6[arr6.size() - 1] << arr7[arr7.size() - 1] << arr8[arr8.size() - 1] << arr9[arr9.size() - 1];
    return 0;
}