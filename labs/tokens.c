#include <string.h>
#include <stdio.h>

int main () {
   char str[128] = "No_meio_do_caminho, tinha uma_pedra.";
   const char s[2] = " ";
   char *token;
   
   token = strtok(str, s);  // primeiro
   
   while( token != NULL ) {
      printf( " %s\n", token );
    
      token = strtok(NULL, s); // proximos
   }
   
   return(0);
}