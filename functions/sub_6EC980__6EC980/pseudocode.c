LONG __thiscall sub_6EC980(_DWORD *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // esi
  LONG v5; // ebx

  NiTimeController_LinkObject(this, a2); /*0x6ec98a*/
  result = sub_7124A0(a2); /*0x6ec991*/
  v4 = *(this + 0x10); /*0x6ec996*/
  v5 = result; /*0x6ec999*/
  if ( v4 != result ) /*0x6ec99d*/
  {
    if ( v4 ) /*0x6ec9a1*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x6ec9a7*/
      if ( !result ) /*0x6ec9af*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x6ec9bd*/
    }
    *(this + 0x10) = v5; /*0x6ec9c1*/
    if ( v5 ) /*0x6ec9c4*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6ec9ca*/
  }
  return result; /*0x6ec9d0*/
}
