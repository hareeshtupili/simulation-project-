#include <iostream>
#include <queue>
using namespace std;
int main () {
    queue<int> myQueue;
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);   
    cout << "Queue size: " << myQueue.size() << endl;
    cout << "Front element: " << myQueue.front() << endl;
    cout << "Back element: " << myQueue.back() << endl;
    cout << "\nRemoving elements:\n";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    return 0;
}

