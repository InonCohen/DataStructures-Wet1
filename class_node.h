#ifndef CLASS_NODE_H
#define CLASS_NODE_H

#include "avl_node.h"

// typedef enum StatusType_t
// {
//     ALLOCATION_ERROR,
//     INVALID_INPUT,
//     SUCCESS,
//     FAILURE
// } StatusType_t;

class classNode
{
private:
    const int course_id;
    const int class_id;
    // avlNode<courseNode> *parent;
    void *parent;
    int time;

public:
    classNode();
    classNode(const classNode& other);
    // classNode(const int course_id, const int class_id, avlNode<courseNode>* parent, int time);
    classNode(const int course_id, const int class_id, void* parent, int time);
    classNode(const int course_id, const int class_id);
    ~classNode();
    int getTime() { return this->time; }
    int getClassId() { return this->class_id; }
    int getCourseId() { return this->course_id; }
    // avlNode<courseNode> * getParentPointer() { return this->parent;}
    void* getParentPointer() { return this->parent;}
    classNode& operator=(const classNode& other);
    bool operator==(const classNode& other);
    bool operator<(const classNode& other);

};

#endif