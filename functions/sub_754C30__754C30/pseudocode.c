NiObject *__thiscall sub_754C30(float *this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0xB0u); /*0x754c39*/
  if ( v3 ) /*0x754c43*/
    v4 = sub_754B20(v3, 1.0, 0, 0, 0, 0, 1.0); /*0x754c5e*/
  else
    v4 = 0; /*0x754c62*/
  sub_75ED50(this, (int)v4, a2); /*0x754c6c*/
  v4[6].__vftable = *(NiObjectVtbl **)(this + 0xC); /*0x754c75*/
  return v4; /*0x754c7a*/
}
