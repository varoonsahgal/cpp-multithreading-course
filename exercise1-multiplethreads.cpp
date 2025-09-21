/*
--------------------------------------------------------------------------------
Simple Thread Demo
--------------------------------------------------------------------------------
Goal:
- Demonstrate how to start a new thread in C++ using std::thread.
- Show that the main thread and the new thread can run independently.
- Note: If the main thread exits before the new thread finishes, the new thread may not complete its work.
--------------------------------------------------------------------------------
*/

#include <iostream>     // for std::cout
#include <thread>       // for std::thread
using namespace std;    // use standard namespace for convenience

// Function to be executed by the new thread
void sayHello() {
    cout << "Hello from new thread!\n";  // Print message from the new thread
}

int main() {
    thread t(sayHello);                  // Start a new thread that runs sayHello()
    cout << "Main thread finished.\n";   // Print message from the main thread
    // Note: The program may exit before the new thread prints its message.
    // To ensure the new thread finishes, add: t.join();
	//t.join(); // Wait for the new thread to finish
	t.join(); // Wait for the new thread to finish
}
