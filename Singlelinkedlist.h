#ifndef SINGLELINKEDLIST_H   
#define SINGLELINKEDLIST_H   

#include <cstddef>          

template <typename Item_Type>
class Single_Linked_List {
private:
    // Define a struct for a linked list node.
    struct Node {
        Item_Type data;     // Data stored in the node.
        Node* next;         // Pointer to the next node.
        Node(const Item_Type& item) : data(item), next(nullptr) {} // Constructor for the node.
    };

    Node* head;             // Pointer to the first node (head) in the list.
    Node* tail;             // Pointer to the last node (tail) in the list.
    size_t num_items;       // Number of items in the list.

public:
    // Constructor: Initialize an empty Single_Linked_List.
    Single_Linked_List();

    // Destructor: Deallocate memory for all nodes in the list.
    ~Single_Linked_List();

    // Add an item to the front of the list.
    void push_front(const Item_Type& item);

    // Add an item to the back of the list.
    void push_back(const Item_Type& item);

    // Remove the item at the front of the list.
    void pop_front();

    // Remove the item at the back of the list.
    void pop_back();

    // Return the item at the front of the list.
    Item_Type front() const;

    // Return the item at the back of the list.
    Item_Type back() const;

    // Check if the list is empty.
    bool empty() const;

    // Insert an item at the specified index.
    void insert(size_t index, const Item_Type& item);

    // Remove an item at the specified index.
    bool remove(size_t index);

    // Find the index of the first occurrence of an item in the list.
    size_t find(const Item_Type& item) const;

    // Get the number of items in the list.
    size_t size() const;
};

#endif 
