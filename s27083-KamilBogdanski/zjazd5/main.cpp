#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;


int main() {
    int iloscGeneracji = 10;
    int i = 0;
    pid_t parent = getpid();
    for(;i < iloscGeneracji; i++) {
        pid_t p = 0;
        p = fork();   
        cout << "PID "<< getpid() << " PPID" << getppid() << endl;
        if (p == 0) {
            sleep(2);
            break;
        }


    }
    if (parent == getpid()) {
        waitpid(-1,NULL,0);
        cout << "Koniec" << endl;
    }
    // return 0;

    
   
    return 0;
}