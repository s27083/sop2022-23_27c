#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;


int main(int argc, char** argv) {
    // zad3
    pid_t a = 0;
    int liczba =0;

    if (argc != 2) {
        return 1;
    }
    liczba = atoi(argv[1]);

    a = fork();

    if (a > 0) {
        int suma =0;
        for (int i =0; i <= liczba; i++) {
            suma +=i;
        }
        waitpid(a,NULL,0);
        cout << "wynik : " << suma << endl;

    }
    else if (a == 0) {
        for (int i = 0; i <= liczba; i++ ) {
            if (i %2 == 0) cout << i << endl;   
        }
    }


    // int iloscGeneracji = 10;
    // int i = 0;
    // pid_t parent = getpid();
    // for(;i < iloscGeneracji; i++) {
    //     pid_t p = 0;
    //     p = fork();   
    //     cout << "PID "<< getpid() << " PPID" << getppid() << endl;
    //     if (p == 0) {
    //         sleep(2);
    //         break;
    //     }


    // }
    // if (parent == getpid()) {
    //     waitpid(-1,NULL,0);
    //     cout << "Koniec" << endl;
    // }
    // return 0;

    
   
    return 0;
}