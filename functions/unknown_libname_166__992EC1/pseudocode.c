int *__cdecl unknown_libname_166(int a1)
{
  int *result; // eax

  result = (int *)a1;
  if ( a1 == 1 )
  {
    result = _errno();
    *result = 0x21;
  }
  else if ( a1 > 1 && a1 <= 3 )
  {
    result = _errno();
    *result = 0x22;
  }
  return result;
}
