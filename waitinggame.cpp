/*First messing around CPP Project. Created 17/03/2026 during my multimedia period 3 class*/

#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

int main() {
    while (true) {
        #if defined(_WIN32) || defined(_WIN64)
    system("cls");
    #else
    system("clear");
#endif

int continuation;
std::cout << "The waiting game \n 1-----------------------------------------Quit\n2-----------------------------------------Play\n";
std::cin >> continuation;
if (continuation == 1) {
    break;
} else if (continuation == 2){
        #if defined(_WIN32) || defined(_WIN64)
    system("cls");
    #else
    system("clear");
#endif
std::cout << "Welcome to the waiting game. Wait for 30 seconds." << std::endl;
std::this_thread::sleep_for(std::chrono::seconds(30));
std::cout << "You waited 30 seconds.\n" << std::endl;
std::this_thread::sleep_for(std::chrono::seconds(4));
continue;

}
    }
} //did i fix it???
