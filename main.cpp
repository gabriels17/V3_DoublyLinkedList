#include <iostream>
#include "doublylinkedlist.h"

using namespace std;

int main() {

    cout << endl << "STRING_LIST" << endl << endl;

    DoublyLinkedList<string> stringList;
    stringList.clear();
    stringList.prev();
    stringList.next();
    cout << stringList.curr_pos() << endl;
    stringList.move_to_end();
    cout << stringList.curr_pos() << endl;

    try{
        stringList.remove();
    }
    catch(InvalidPositionException){cout << "bla" << endl;}
	stringList.prev();
    try{
        stringList.remove();
    }
    catch(InvalidPositionException){cout << "bla" << endl;}
    stringList.clear();
    cout << stringList.curr_pos() << endl;

/*
    stringList.next();
    cout << stringList.curr_pos() << endl;
    stringList.append("fic");
    stringList.append("sdf");
    stringList.append("pod");
    stringList.append("oli");
    stringList.clear();
    cout << stringList.curr_pos() << endl;
    stringList.prev();
    cout << stringList.get_value() << endl;
    stringList.prev();
    stringList.insert("why?");
    stringList.insert("pod");
    stringList.append("bxph");
    cout << stringList << endl;
    stringList.move_to_pos(4);
    cout << stringList.curr_pos() << endl;
    stringList.move_to_pos(2);
    cout << stringList.curr_pos() << endl;
    stringList.move_to_pos(0);
    cout << stringList.curr_pos() << endl;
    stringList.move_to_pos(stringList.length());
    cout << stringList.curr_pos() << endl;
    stringList.move_to_pos(2);
    cout << stringList.curr_pos() << endl;
    stringList.remove();
    cout << stringList << endl;
    stringList.move_to_pos(0);
    stringList.remove();
    cout << stringList << endl;
    try{
    stringList.move_to_pos(5);
    stringList.insert("jaa");
    }
    catch(InvalidPositionException){
        cout << "NEI" << endl;
    }
    stringList.move_to_pos(3);
    stringList.insert("jaa");
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
*/
    return 0;
}

