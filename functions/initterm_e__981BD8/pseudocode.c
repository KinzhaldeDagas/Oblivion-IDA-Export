int __cdecl _initterm_e(int (**a1)(void), unsigned int a2)
{
  int result; // eax

  result = 0; /*0x981bdd*/
  while ( (unsigned int)a1 < a2 && !result ) /*0x981be3*/
  {
    if ( *a1 ) /*0x981be5*/
      result = (*a1)(); /*0x981beb*/
    ++a1; /*0x981bed*/
  }
  return result; /*0x981bf6*/
}
