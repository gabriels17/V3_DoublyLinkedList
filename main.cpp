#include <iostream>
#include "doublylinkedlist.h"

using namespace std;

int main() {

    cout << endl << "STRING_LIST" << endl << endl;

    DoublyLinkedList<string> stringList;

    stringList.append("fic");
    stringList.append("sdf");
    stringList.prev();
    stringList.insert("pod");
    stringList.append("bxph");
    cout << stringList << endl;
    stringList.move_to_pos(2);
    stringList.remove();
    cout << stringList << endl;
    stringList.clear();
    stringList.clear();
    cout << stringList << endl;
    stringList.insert("wet");
    stringList.append("bxph");
    cout << stringList << endl;
    try{
        stringList.remove();
        cout << stringList << endl;
    }catch(InvalidPositionException) {
        cout << "Caught InvalidPositionException" << endl;
    }
    try{
        stringList.remove();
        cout << stringList << endl;
    }catch(InvalidPositionException) {
        cout << "Caught InvalidPositionException" << endl;
    }
    stringList.append("z");
    stringList.prev();
    stringList.insert("ah");
    cout << stringList << endl;

    cout << endl << "INT_LIST" << endl << endl;

    DoublyLinkedList<int> intList;

    intList.append(4);
    intList.move_to_start();
    intList.insert(7);
    cout << intList << endl;

    return 0;
}

