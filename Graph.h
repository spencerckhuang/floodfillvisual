#ifndef GRAPH_H 
#define GRAPH_H

#include "Node.h"

#include <iostream>
#include <vector>
#include <string>

class Graph{
    public: 
        Graph(std::string filename);

        void display();

        Node getNode(int r, int c);

        int getRows(){ return rows; }
        int getCols(){ return cols; }

        // should these methods exist???
        void setRows(int r){ rows = r; }
        void setCols(int c){ cols = c; }

        std::vector< std::vector< Node > > getGrid(){ return grid; }
        void push_back_row(std::vector< Node > row){ grid.push_back(row); }

        void bfs_fill(int r, int c);


    private:
        int rows;
        int cols;

        std::vector< std::vector<Node> > grid;
        
};

#endif