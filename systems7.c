#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

char ** parse_args( char * line ){
  char *curr = line;
  return *line;
}

int main(){
  printf("hello\n");
  char test[] = "hello";
  printf("%s\n", test);
  char line[100] = "woah this is cool";
  char *s1 = line;
  while (s1 != NULL){
    printf("[%s]\n", strsep( &s1, " " ));
    printf("[%s]\n", s1);
  }
  return 0;
}
