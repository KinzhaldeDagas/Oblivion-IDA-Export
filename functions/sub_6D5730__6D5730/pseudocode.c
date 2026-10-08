LONG __thiscall sub_6D5730(_DWORD *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // esi
  LONG v5; // ebx

  NiTimeController_LinkObject(this, a2); /*0x6d573a*/
  result = sub_7124A0(a2); /*0x6d5741*/
  v4 = *(this + 0x14); /*0x6d5746*/
  v5 = result; /*0x6d5749*/
  if ( v4 != result ) /*0x6d574d*/
  {
    if ( v4 ) /*0x6d5751*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x6d5757*/
      if ( !result ) /*0x6d575f*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x6d576d*/
    }
    *(this + 0x14) = v5; /*0x6d5771*/
    if ( v5 ) /*0x6d5774*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6d577a*/
  }
  return result; /*0x6d5780*/
}
