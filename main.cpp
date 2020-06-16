#include <iostream>
using namespace std;

int maxValue();

int main()
{
    int result;

    result = maxValue();

    cout << result << endl;

    return 0;
}

int maxValue()
{
    const int ROW = 6;
    const int COLUMN = 6;
    
    int i = 0;
    int count = 0;
    int preCount = 0;
    int glassValue = 0;

    int arr[ROW][COLUMN];

    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COLUMN; j++) 
            cin >> arr[i][j];
    }

    do
    {
        int j = 0;
        
        do
        {
            count = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            count = count + arr[i+1][j+1];
            count = count + (arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]);

            preCount = count;   
            if((i == 0) && (j == 0))
                glassValue = preCount;
            if(preCount > glassValue)
                glassValue = preCount;
            j++;

        }while((j+2) < ROW);
        
        i++;
    
    }while((i+2) < COLUMN);

    return glassValue;
}

