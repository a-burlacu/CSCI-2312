//grid.h  Grid class definition
#ifndef GRID_H
#define GRID_H


class Grid
{
    private:
        int x;
        int y;
        int num;

        
    public:
  
        //accessor functions
        int getRow();
        int getColumn();

        //mutator functions
        void setRow(int rows);
        void setColumn(int columns);

        //get user input
        void userInput();

        //create grid
        void grids();

};
#endif 