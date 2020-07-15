#include "randlib.h"
#include <stdio.h> //used by fopen, fclose, etc
#include <stdlib.h> // used by abort
static FILE *urandstream;

__attribute__((constructor))
static void
software_rand64_init (void)
{
  urandstream = fopen ("/dev/urandom", "r");
  if (! urandstream)
    abort ();
}

/* Return a random value, using software operations.  */
extern unsigned long long
rand64 (void)
{
  unsigned long long int x;
  if (fread (&x, sizeof x, 1, urandstream) != 1)
    abort ();
  return x;
}
__attribute__((destructor))
/* Finalize the software rand64 implementation.  */
static void
software_rand64_fini (void)
{
  fclose (urandstream);
}

