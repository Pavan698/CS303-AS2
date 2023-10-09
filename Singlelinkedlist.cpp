#include "SingleLinkedList.h"   
#include <cstddef>              
#include <iostream>            

// Constructor: Initialize an empty Single_Linked_List.
template <typename Item_Type>
Single_Linked_List<Item_Type>::Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {}

// Destructor: Deallocate memory for all nodes in the list.
template <typename Item_Type>
Single_Linked_List<Item_Type>::~Single_Linked_List() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Add an item to the front of the list.
template <typename Item_Type>
void Single_Linked_List<Item_Type>::push_front(const Item_Type& item) {
    Node* new_node = new Node(item);
    if (!head) {
        head = tail = new_node;
    } else {
        new_node->next = head;
        head = new_node;
    }
    num_items++;
}

// Add an item to the back of the list.
template <typename Item_Type>
void Single_Linked_List<Item_Type>::push_back(const Item_Type& item) {
    Node* new_node = new Node(item);
    if (!tail) {
        head = tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
    num_items++;
}

// Remove the item at the front of the list.
template <typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front() {
    if (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
        num_items--;
    }
}

// Remove the item at the back of the list.
template <typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back() {
    if (head) {
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        } else {
            Node* current = head;
            while (current->next != tail) {
                current = current->next;
            }
            delete tail;
            tail = current;
            tail->next = nullptr;
        }
        num_items--;
    }
}

// Return the item at the front of the list.
template <typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::front() const {
    if (head) {
        return head->data;
    } else {
        throw std::runtime_error("List is empty");
    }
}

// Return the item at the back of the list.
template <typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::back() const {
    if (tail) {
        return tail->data;
    } else {
        throw std::runtime_error("List is empty");
    }
}

// Check if the list is empty.
template <typename Item_Type>
bool Single_Linked_List<Item_Type>::empty() const {
    return num_items == 0;
}

// Insert an item at the specified index.
template <typename Item_Type>
void Single_Linked_List<Item_Type>::insert(size_t index, const Item_Type& item) {
    if (index > num_items) {
        index = num_items;  // Insert at the end
    }

    Node* new_node = new Node(item);
    if (index == 0) {
        new_node->next = head;
        head = new_node;
    } else {
        Node* current = head;
        for (size_t i = 0; i < index - 1; ++i) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }

    if (index == num_items) {
        tail = new_node;
    }

    num_items++;
}

// Remove an item at the specified index.
template <typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index) {
    if (index >= num_items) {
        return false;
    }

    Node* temp;
    if (index == 0) {
        temp = head;
        head = head->next;
        delete temp;
    } else {
        Node* current = head;
        for (size_t i = 0; i < index - 1; ++i) {
            current = current->next;
        }
        temp = current->next;
        current->next = temp->next;
        delete temp;

        if (index == num_items - 1) {
            tail = current;
        }
    }

    num_items--;
    return true;
}

// Find the index of the first occurrence of an item in the list.
template <typename Item_Type>
size_t Single_Linked_List<Item_Type>::find(const Item_Type& item) const {
    Node* current = head;
    size_t index = 0;
    while (current) {
        if (current->data == item) {
            return index;
        }
        current = current->next;
        index++;
    }
    return num_items;  // Item not found
}

// Get the number of items in the list.
template <typename Item_Type>
size_t Single_Linked_List<Item_Type>::size() const {
    return num_items;
}
