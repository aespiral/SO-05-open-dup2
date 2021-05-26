#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
// #include <types.h> // linux

int main(int argc, char** argv) {

   int status; // wait
   int pid;
   char buf[256];

   while(1) {
      printf("proto>");
      fflush(stdin);
      scanf("\n");
      pid = fork();
      //TODO: error handling
      if (pid == 0) {
         // child process
         puts("Ping!");
         exit(0);
      } else {
         waitpid(pid, &status, 0);
      }
   }
}