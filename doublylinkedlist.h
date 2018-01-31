#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>

#include "listnode.h"

using namespace std;

class InvalidPositionException { };
class EmptyException { };

template <class T>

class DoublyLinkedList {
    public:
        DoublyLinkedList() {
            head = new ListNode<T>;
            tail = new ListNode<T>;
            head->next = tail;
            tail->prev = head;
            currNode = tail;
            currentPosition = 0;
            size = 0;

        }

        ~DoublyLinkedList() {
            ///ListNode<T>* tmp_node = currNode;
            for(int i = 0; i < size; i++){
                move_to_start();
                //tmp_node = currNode;
                next();
                delete currNode;

            }
            ///delete head;
            ///delete tail;
        }

        // Clear contents from the list, to make it empty.
        // Worst-case time complexity: Linear
        void clear() {
            if(size == 0){
                throw EmptyException();
            }
            move_to_end();
            prev();
            for(int i = 0; i < size; i++){
                ListNode<T>* tmp_node = currNode;
                tail->prev = currNode->prev;
                currNode->prev->next = tail;
                currNode = tmp_node->prev;
            }
            size = 0;
            ///TODO: Implement
        }

        // Insert an element at the current location.
        // item: The element to be inserted
        // Worst-case time complexity: Constant
        void insert(const T& item) {
            ListNode<T>* node = new ListNode<T>(item, currNode->prev, currNode);
            currNode->prev->next = node;
            currNode->prev = node;
        }

        // Append an element at the end of the list.
        // item: The element to be appended.
        // Worst-case time complexity: Constant
        void append(const T& item) {
            ListNode<T>* node = new ListNode<T>(item, tail->prev, tail);
            node->prev->next = node;
            tail->prev = node;
            size++;
        }

        // Remove and return the current element.
        // Return: the element that was removed.
        // Worst-case time complexity: Constant
        // Throws InvalidPositionException if current position is
        // behind the last element
        T remove() {
            if(currentPosition = size - 1){
                throw InvalidPositionException();
            }

            currNode->prev->next = currNode->next;
            currNode->next->prev = currNode->prev;
            return currNode->data;
            ///TODO: Implement
            ///remember to return a value
        }

        // Set the current position to the start of the list
        // Worst-case time complexity: Constant
        void move_to_start() {
            currNode = head->next;
            ///TODO: Implement
        }

        // Set the current position to the end of the list
        // Worst-case time complexity: Constant
        void move_to_end() {
            currNode = tail;
            currentPosition = size - 1;
            ///TODO: Implement
        }

        // Move the current position one step left. No change
        // if already at beginning.
        // Worst-case time complexity: Constant
        void prev() {
            currNode = currNode->prev;
            currentPosition--;
            ///TODO: Implement
        }

        // Move the current position one step right. No change
        // if already at end.
        // Worst-case time complexity: Constant
        void next() {
            currNode = currNode->next;
            ///TODO: Implement
        }

        // Return: The number of elements in the list.
        // Worst-case time complexity: Constant
        int length() const {
            return size;
        }

        // Return: The position of the current element.
        // Worst-case time complexity: Constant
        int curr_pos() const {
            return currentPosition;
        }

        // Set current position.
        // pos: The position to make current.
        // Worst-case time complexity: Linear
        // Throws InvalidPositionException if 'pos' is not a valid position
        void move_to_pos(int pos) {
            if(pos + 1 == size){
                throw InvalidPositionException();
            }

            if(pos == currentPosition){
                return;
            }
            else if(pos - currentPosition < 0){
                int i = pos - currentPosition;
                while(i != 0){
                    prev();
                    i++;
                }
            }
            else if(pos - currentPosition > 0){
                int i = pos - currentPosition;
                while(i != 0){
                    next();
                    i--;
                }
            }
            ///TODO: Implement
        }

        // Return: The current element.
        // Worst-case time complexity: Constant
        // Throws InvalidPositionException if current position is
        // behind the last element
        const T& get_value() const {
            return currNode->data;
        }


        // Outputs the elements of 'lis' to the stream 'outs', separated
        // by a single space.
        friend ostream& operator <<(ostream& out, const DoublyLinkedList& lis) {
            for(ListNode<T> *node = lis.head->next; node != lis.tail; node = node->next){
                out << node->data << " ";
            }
            return out;
        }

    private:

        // head is our preceding node
        // not a data node itself
        ListNode<T> *head;

        // tail is our trailing node
        // not a data node itself
        ListNode<T> *tail;

        //currNode is the node at the current position
        ListNode<T> *currNode;

        int size;
        int currentPosition;
};


#endif // DOUBLY_LINKED_LIST_H
