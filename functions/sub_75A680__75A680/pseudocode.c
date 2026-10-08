LONG __thiscall sub_75A680(_DWORD *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // esi
  LONG v5; // ebx

  sub_752CB0(a2); /*0x75a68a*/
  result = sub_7124A0(a2); /*0x75a691*/
  v4 = *(this + 6); /*0x75a696*/
  v5 = result; /*0x75a699*/
  if ( v4 != result ) /*0x75a69d*/
  {
    if ( v4 ) /*0x75a6a1*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x75a6a7*/
      if ( !result ) /*0x75a6af*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x75a6bd*/
    }
    *(this + 6) = v5; /*0x75a6c1*/
    if ( v5 ) /*0x75a6c4*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x75a6ca*/
  }
  return result; /*0x75a6d0*/
}
