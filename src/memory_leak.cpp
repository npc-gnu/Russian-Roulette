// Memory leaker code for when you lose.
#include <thread>
#include <chrono>
void leakyDetached() {
    int* p = new int[666000]; 
    std::this_thread::sleep_for(std::chrono::seconds(5));
}
