int __cdecl _initterm_e(int (**a1)(void), unsigned int a2)
{
  int result; // eax

  result = 0;
  while ( (unsigned int)a1 < a2 && !result )
  {
    if ( *a1 )
      result = (*a1)();
    ++a1;
  }
  return result;
}
