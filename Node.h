#ifndef NODE_H
#define NODE_H

class Node{
    public:
        Node(char v);
        Node();

        char getValue();
        void setValue(char v);

    private:
        char value;
};

#endif