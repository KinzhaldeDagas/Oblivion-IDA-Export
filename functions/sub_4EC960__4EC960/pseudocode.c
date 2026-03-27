_DWORD *__thiscall sub_4EC960(_DWORD *this, _DWORD *a2)
{
  int v2; // eax

  v2 = *(this + 0xF);
  *a2 = v2;
  if ( v2 )
    InterlockedIncrement((volatile LONG *)(v2 + 4));
  return a2;
}
