// hello-git.c, an experiment in using git to handle C programmes.

#include <stdio.h>
#include <string.h> // to get strcasecmp(). For Windows use stricmp()

static void greeting(char *pProgramme, char *pLanguage)
{
  if ( 0==strcasecmp(pLanguage,"French"))
    printf("Bonjour, Monde from %s\n",pProgramme);
  else if ( 0==strcasecmp(pLanguage,"German"))
    printf("Hallo, Welt from %s\n",pProgramme);
  else if ( 0==strcasecmp(pLanguage,"Welsh"))
    printf("Helo, Fyd from %s\n",pProgramme);
  else if ( 0==strcasecmp(pLanguage,"Geordie"))
    printf("Hallow Woorld - Rhymes with cow and bor(l)ked from %s\n",pProgramme);
  else
    printf("Hello, World from %s\n",pProgramme);
}

int main(int argc, char *argv[])
{  
  for  ( int index=1; index < argc; ++index )
    {  greeting(argv[0],argv[index]); }
   
  return 0;
}

