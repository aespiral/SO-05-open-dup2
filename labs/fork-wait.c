#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
// #include <types.h> // linux

int main(int argc, char** argv) {

   int status; // wait
   int pid = fork();
   //TODO: error handling
   if (pid == 0) {
      // child process
      puts("Starting the child process....");
      sleep(3);
      puts("Closing the child process");
      exit(33);
   } else {
      puts("Starting the parent process: waiting for the child....");
      waitpid(pid, &status, 0);
      if (WIFEXITED(status))
         printf("Child's exit code: %d\n", WEXITSTATUS(status));
   }

}