//grid.cpp  Grid class methods
#include <iostream>
#include <vector>
#include <cstdlib>
#include "grid.h"
using namespace std;

//function definitions

int Grid::getRow()
{
    return x;
}
int Grid::getColumn()
{
    return y;
}
void Grid::setRow(int rows)
{
    x = rows;
}
void Grid::setColumn(int columns)
{
    y = columns;
}
void Grid::userInput()
{
    cout << "Enter number of rows: ";
    cin >> x;
    cout << "Enter number of columns: ";
    cin >> y;
}

void Grid::grids()
{
    // create 2D vector
    vector<vector<int>> grid1(x, vector<int>(y));
    // use srand so it's a different selection every run
    srand(time(0));
    // calculates 1/3 of cells
    num = (x * y) / 3;
    // fills 1/3 of cells with a 1
    for (int i = 0; i < num; i++)
    {
        grid1[rand() % x][rand() % y] = 1; // randomize which cell contains a 1
        /*
              grid[i][j] = 1
              where [i] is a random number from 0-x (not incl x)
              and [j] is a random number from 0-y (not incl y)
          */
    }
    cout << "Grid1:" << endl;
    //print grid
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << grid1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Grid2:" << endl;
    vector<vector<int>> grid2(x, vector<int>(y));

    int m = (x * y) / 3;

    for (int i = 0; i < m; i++)
    {
        grid2[rand() % x][rand() % y] = 1;
    }

    //print
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << grid2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    vector<vector<int>> grid3(x, vector<int>(y));

    // compare grid1 and grid2
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (grid1[i][j] == 1 && grid2[i][j] == 1) // checks if both are 1
            {
                grid3[i][j] = 1; // sets the same index to =1 otherwise it defaults to 0
            }
        }
    }
    // print comparison grid
    cout << "Comparison Grid:" << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << grid3[i][j] << " ";
        }
        cout << endl;
    }
}