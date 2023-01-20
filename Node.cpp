#include "Node.h"

Node::Node(char v): value(v) {}
Node::Node(): value('0') {}

char Node::getValue(){ return value; }
void Node::setValue(char v){ value = v; }