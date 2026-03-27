LONG __thiscall sub_7D7790(_DWORD *this, int a2, int a3)
{
  LONG result; // eax
  int v4; // esi
  _DWORD *v5; // edi

  result = *(this + 0x30);
  v4 = *(_DWORD *)(result + 4 * a2);
  v5 = (_DWORD *)(result + 4 * a2);
  if ( v4 != a3 )
  {
    if ( v4 )
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *v5 = a3;
    if ( a3 )
      return InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
  return result;
}
