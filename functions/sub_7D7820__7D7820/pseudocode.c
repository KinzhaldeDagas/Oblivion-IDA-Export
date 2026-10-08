LONG __thiscall sub_7D7820(_DWORD *this, int a2, int a3)
{
  LONG result; // eax
  int v4; // esi
  _DWORD *v5; // edi

  result = *(this + 0x31); /*0x7d7820*/
  v4 = *(_DWORD *)(result + 4 * a2); /*0x7d7830*/
  v5 = (_DWORD *)(result + 4 * a2); /*0x7d7836*/
  if ( v4 != a3 ) /*0x7d7839*/
  {
    if ( v4 ) /*0x7d783d*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x7d7843*/
      if ( !result ) /*0x7d784b*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x7d7859*/
    }
    *v5 = a3; /*0x7d785d*/
    if ( a3 ) /*0x7d785f*/
      return InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x7d7865*/
  }
  return result; /*0x7d786b*/
}
