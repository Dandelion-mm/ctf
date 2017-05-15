#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
  char buf[1024];
  int ch;
  
  fputs(fgets(buf, sizeof(buf),stdin), stdout);
  fputs(fgets(buf, sizeof(buf),stdin), stdout);
  fputs(fgets(buf, sizeof(buf),stdin), stdout);
  
  while((ch = getchar()) != EOF){
    putchar((ch & 1) ? ch / 2 :255);
  }
}
