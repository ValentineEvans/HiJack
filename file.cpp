#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int array[2016];
    for(int i = 0; i < 2016; i++)
    {
        array[i] = i + 1;
    }
    int sum = 0;
    int counter = 0;
    for(int z = 0; z < 1008; z++)
    {
    sum = sum + array[counter] - array[counter + 3];
    counter++;
    }
    cout << sum << endl;
}