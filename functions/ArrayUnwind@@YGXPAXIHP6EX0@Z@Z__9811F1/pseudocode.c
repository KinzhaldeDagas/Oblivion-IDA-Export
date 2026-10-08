void __stdcall __ArrayUnwind(char *a1, unsigned int a2, int a3, void (__thiscall *a4)(void *))
{
  while ( --a3 >= 0 ) /*0x981201*/
  {
    a1 -= a2; /*0x98120c*/
    ((void (*)(void))a4)(); /*0x98120f*/
  }
}
