_DWORD *__thiscall sub_435B10(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = *this;
  if ( *this != a2 )
  {
    if ( v3 )
      InterlockedDecrement((volatile LONG *)(v3 + 0xC));
    *this = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 0xC));
  }
  return this;
}
