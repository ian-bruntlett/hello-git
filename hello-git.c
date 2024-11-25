// hello-git.c, an experiment in using git to handle C programmes.
// ... and  to see if backup files are respected via .gitignore file.
// but emacs doesn't appear to make backup files any more.
#include <stdio.h>
#include <string.h> // to get strcasecmp(). For Windows use stricmp()

int main(int argc, char *argv[])
{
  if ( argc>=2 && 0==strcasecmp(argv[1],"French"))
    printf("Bonjour, Monde from %s\n",argv[0]);
  else if ( argc>=2 && 0==strcasecmp(argv[1],"German"))
    printf("Hallo, Welt from %s\n",argv[0]);
  else if ( argc>=2 && 0==strcasecmp(argv[1],"Welsh"))
    printf("Hallo, Welt from %s\n",argv[0]);
  else
    printf("Helo, Fyd from %s\n",argv[0]);
  return 0;
}

