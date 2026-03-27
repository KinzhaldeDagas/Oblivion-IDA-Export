_DWORD *__thiscall sub_435AB0(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = *this;
  if ( *this != a2 )
  {
    if ( v3 )
      InterlockedDecrement((volatile LONG *)(v3 + 4));
    *this = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  return this;
}
