//Nick Dunne - IT279 S2021
//Huffman Code structures used in encoding and decoding
#include <iostream>
using namespace std;

class Node{
    public:
        //The character to track, or NULL character (value 0) for no character
        char data;
        //The number of times the character appears
        int count;
        //Data flag, to mark whether a character should be present
        bool isLeaf;

        //Left and right subtrees
        Node* left;
        Node* right;

        //Default constructor, initialized null subtrees and no character or count
        Node();

        //Subtree constructor, initializes subtrees and count
        Node(Node* leftSubtree, Node* rightSubtree, int charCount);

        //Character and count constructor, like other character constructor but can use custom count value
        Node(char charData, int charCount);
};

//Cleanup method to clear the dynamically allocated huffman code tree
void cleanTree(Node*& root);

//Class used to store info for the huffman code encoding table
class HuffmanChar{
    public:
        //The binary code (in integer form) that is written to the .huf file
        int code;
        //The depth of the node in the huffman code tree (also represents the number of binary digits to write to the file)
        int depth;

        HuffmanChar(int hCode, int hDepth) : code(hCode), depth(hDepth) {};
        HuffmanChar(): code(NULL), depth(NULL) {};
};
