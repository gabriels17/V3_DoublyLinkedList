#include <iostream>
#include "doublylinkedlist.h"

using namespace std;

int main() {

    cout << endl << "STRING_LIST" << endl << endl;

    DoublyLinkedList<string> stringList;

    stringList.append("fic");
    stringList.append("sdf");
    stringList.prev();
    stringList.prev();
    stringList.next();
    stringList.insert("pod");
    //stringList.move_to_pos(2);
    cout << stringList << endl;
    stringList.clear();
    stringList.clear();
    cout << stringList << endl;
    stringList.insert("wet");
    cout << stringList << endl;
    stringList.prev();
    stringList.append("bxph");
    cout << stringList << endl;
    /*try{
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
    cout << stringList << endl;
    stringList.prev();

    cout << stringList << endl;
    stringList.insert("ah");

    cout << stringList << endl;

    stringList.next();
    cout << stringList << endl;
    stringList.next();

    cout << stringList << endl;
    stringList.prev();

    cout << stringList << endl;
    stringList.append("z");
    cout << stringList << endl;

    cout << endl << "INT_LIST" << endl << endl;

    DoublyLinkedList<int> intList;

    intList.append(4);
    intList.move_to_start();
    intList.insert(7);
    cout << intList << endl;
*/
    return 0;
}

