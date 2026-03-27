_DWORD *__thiscall sub_4C1670(_DWORD *this, _DWORD *a2)
{
  int v2; // eax

  v2 = *(this + 9);
  *a2 = v2;
  if ( v2 )
    InterlockedIncrement((volatile LONG *)(v2 + 4));
  return a2;
}
