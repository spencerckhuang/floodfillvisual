#include "Graph.h"
#include "Node.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <unordered_set>
#include <queue>
#include <cassert>

using std::string;
using std::stringstream;
using std::ifstream;
using std::cout;
using std::endl;
using std::vector;
using std::unordered_set;
using std::queue;

Graph::Graph(string filename){
    ifstream in;
    in.open(filename);

    if(in.fail()){
        throw std::invalid_argument("Error: Cannot load graph from file.");
    }

    string line;
    vector<Node> processedLine;
    int rowCount = 0, colCount = 0;

    while(in >> line){
        processedLine.clear();
        rowCount++;
        if(rowCount == 1){
            colCount = line.length();
        } else {
            if(line.length() != colCount){
                throw std::invalid_argument("Error: Grid must strictly be an r*c rectangle.");
            }
        }

        unordered_set<char> validNodeValues;
        validNodeValues.insert('0');
        validNodeValues.insert('1');


        for(int i = 0; i < line.length(); i++){
            Node newNode;
            if(validNodeValues.find(line[i]) != validNodeValues.end()){
                newNode.setValue(line[i]);
            } else {
                throw std::invalid_argument("Error: Invalid arguments for grid contents.");
            }
            processedLine.push_back(newNode);
        }

        push_back_row(processedLine);
    }

    rows = rowCount;
    cols = colCount;

}

Node Graph::getNode(int r, int c){
    return grid.at(r).at(c);
}

void Graph::display(){
    cout << "rows: " << rows << endl;
    cout << "cols: " << cols << endl;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << getNode(i, j).getValue() << " ";
        }
        cout << endl;
    }
}

void Graph::bfs_fill(int r, int c, char newColor){
    assert(r >= 0 && r < grid.size());
    assert(c >= 0 && c < grid.at(0).size());

    unordered_set<Node> marked;
    queue<Node> q;
    char oldColor = getNode(r,c).getValue();

    q.push(getNode(r, c));

    while(!q.isEmpty()){
        Node cur = q.pop();
        if(marked.find(cur) == marked.end()){
            cur.setValue(char);
            marked.insert(cur);

            // to get valid neighbors of current Node:
            // (probably need to reformat project... give Nodes coordinate values and put them all into a single vector.)
            if(r - 1 >= 0 && getNode( ###### ).getValue() == oldColor){ q.push(getNode( ###### ))}
        }
    }


}




