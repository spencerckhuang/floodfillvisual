#include "Graph.h"
#include "Node.h"

#include <iostream>
#include <string>
#include <fstream>

using std::cout; 
using std::endl;
using std::string;
using std::ifstream;

int main(int argc, char *argv[]){
    cout << "Hello world!" << endl;
    
    if(argc != 2){
        throw std::invalid_argument("Error: Invalid number of arguments");
    }


    Graph myGraph(argv[1]);

    myGraph.display();

}