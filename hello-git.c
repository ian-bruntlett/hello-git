// hello-git.c, an experiment in using git to handle C programmes.
// ... and  to see if backup files are respected via .gitignore file.
// but emacs doesn't appear to make backup files any more.
#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Bonjour, Monde from %s\n",argv[0]);
  return 0;
}

