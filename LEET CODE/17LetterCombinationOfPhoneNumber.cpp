#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

void PrintingCombinations(string a);

int main()
{
    string input = "";
    cout << "enter a combination of letters from 2 to 9 ";
    cin >> input;

    cout << "[";
    PrintingCombinations(input);
    cout << "]";
}

void PrintingCombinations(string str)
{

    string array[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    int nums[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < str.length(); i++)
    {
        int temp = str[i] - 48;
        nums[i] = temp;
    }
    int c = 0;

    for (int i = 0; i < array[nums[0]].length(); i++)
    {
        if (str.length() == 1)
            cout << "'" << array[nums[0]][i] << "', ";

        if (str.length() >= 2)
            for (int j = 0; j < array[nums[1]].length(); j++)
            {
                if (str.length() == 2)

                    cout << "'" << array[nums[0]][i] << array[nums[1]][j] << "', ";

                if (str.length() >= 3)
                    for (int k = 0; k < array[nums[2]].length(); k++)
                    {
                        if (str.length() == 3)

                            cout << "'" << array[nums[0]][i] << array[nums[1]][j] << array[nums[2]][k] << "', ";

                        if (str.length() >= 4)

                            for (int l = 0; l < array[nums[3]].length(); l++)
                            {
                                if (str.length() == 4)

                                    cout << "'" << array[nums[0]][i] << array[nums[1]][j] << array[nums[2]][k] << array[nums[3]][l] << "', ";

                                if (str.length() >= 5)

                                    for (int m = 0; m < array[nums[4]].length(); m++)
                                    {
                                        if (str.length() == 1)

                                            cout << "'" << array[nums[0]][i] << array[nums[1]][j] << array[nums[2]][k] << array[nums[3]][l] << array[nums[4]][m] << "', ";
                                    }
                            }
                    }
            }
    }
    cout << "\b\b";
}