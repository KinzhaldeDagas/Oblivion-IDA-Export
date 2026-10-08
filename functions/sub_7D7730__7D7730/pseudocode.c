LONG __thiscall sub_7D7730(_DWORD *this, int a2, int a3)
{
  LONG result; // eax
  int v4; // esi
  _DWORD *v5; // edi

  result = *(this + 0x2F); /*0x7d7730*/
  v4 = *(_DWORD *)(result + 4 * a2); /*0x7d7740*/
  v5 = (_DWORD *)(result + 4 * a2); /*0x7d7746*/
  if ( v4 != a3 ) /*0x7d7749*/
  {
    if ( v4 ) /*0x7d774d*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x7d7753*/
      if ( !result ) /*0x7d775b*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x7d7769*/
    }
    *v5 = a3; /*0x7d776d*/
    if ( a3 ) /*0x7d776f*/
      return InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x7d7775*/
  }
  return result; /*0x7d777b*/
}
