LONG __thiscall sub_75D850(_DWORD *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // esi
  LONG v5; // ebx

  sub_71FDC0(a2); /*0x75d85a*/
  result = sub_7124A0(a2); /*0x75d861*/
  v4 = *(this + 0x1A); /*0x75d866*/
  v5 = result; /*0x75d869*/
  if ( v4 != result ) /*0x75d86d*/
  {
    if ( v4 ) /*0x75d871*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x75d877*/
      if ( !result ) /*0x75d87f*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x75d88d*/
    }
    *(this + 0x1A) = v5; /*0x75d891*/
    if ( v5 ) /*0x75d894*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x75d89a*/
  }
  return result; /*0x75d8a0*/
}
