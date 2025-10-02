#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include "sanimatel.hpp"
void sanimatel(const std::string &text, int time_milisecond){
    for(char c : text){
        std::cout << c;
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(time_milisecond));
    }}
