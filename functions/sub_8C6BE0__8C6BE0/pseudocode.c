int __thiscall sub_8C6BE0(_DWORD *this)
{
  int result; // eax
  unsigned int i; // ebx
  int v4; // ecx
  int v5; // esi
  _DWORD *v6; // edi

  result = 0;
  for ( i = 0; i < *(this + 3); v6[1] = 0 )
  {
    v4 = *(this + 1);
    v5 = *(_DWORD *)(v4 + 8 * i);
    v6 = (_DWORD *)(v4 + 8 * i);
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      *v6 = 0;
      result = 0;
    }
    ++i;
  }
  *(this + 4) = 0;
  *(this + 3) = 0;
  return result;
}
