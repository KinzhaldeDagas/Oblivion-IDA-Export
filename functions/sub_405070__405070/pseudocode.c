_DWORD *__thiscall sub_405070(_DWORD *this, int a2)
{
  *this = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  return this;
}
