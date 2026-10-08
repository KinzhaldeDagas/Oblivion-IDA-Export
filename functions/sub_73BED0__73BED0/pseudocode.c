LONG __thiscall sub_73BED0(unsigned __int16 *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // esi
  LONG v5; // ebx

  sub_708F90(this, a2); /*0x73beda*/
  result = sub_7124A0(a2); /*0x73bee1*/
  v4 = *((_DWORD *)this + 0x4F); /*0x73bee6*/
  v5 = result; /*0x73beec*/
  if ( v4 != result ) /*0x73bef0*/
  {
    if ( v4 ) /*0x73bef4*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x73befa*/
      if ( !result ) /*0x73bf02*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x73bf10*/
    }
    *((_DWORD *)this + 0x4F) = v5; /*0x73bf14*/
    if ( v5 ) /*0x73bf1a*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x73bf20*/
  }
  return result; /*0x73bf26*/
}
