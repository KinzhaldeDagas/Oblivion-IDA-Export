int *__cdecl _Deletegloballocale(int *a1)
{
  int *result; // eax

  result = a1;
  if ( *a1 )
  {
    result = (int *)sub_6F6DC0(*a1);
    if ( result )
      return (int *)(*(int (__thiscall **)(int *, int))*result)(result, 1);
  }
  return result;
}
