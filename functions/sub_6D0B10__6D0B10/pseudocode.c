LONG __thiscall sub_6D0B10(_DWORD *this, int a2, unsigned __int16 a3)
{
  LONG result; // eax
  int v4; // ecx
  int v5; // esi
  _DWORD *v6; // edi

  result = a3;
  v4 = *(this + 0x15);
  v5 = *(_DWORD *)(v4 + 4 * a3);
  v6 = (_DWORD *)(v4 + 4 * a3);
  if ( v5 != a2 )
  {
    if ( v5 )
    {
      result = InterlockedDecrement((volatile LONG *)(v5 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *v6 = a2;
    if ( a2 )
      return InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  return result;
}
