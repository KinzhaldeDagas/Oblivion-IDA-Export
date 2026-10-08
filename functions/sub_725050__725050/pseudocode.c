int __thiscall sub_725050(_DWORD *this, int a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x28u); /*0x725077*/
  v4 = (int)v3; /*0x72507c*/
  if ( v3 ) /*0x72508f*/
  {
    sub_738760(v3); /*0x725093*/
    *(_DWORD *)v4 = &NiRangeLODData::`vftable'; /*0x725098*/
    *(float *)(v4 + 8) = g_zeroNiPoint3; /*0x7250a3*/
    *(float *)(v4 + 0xC) = *(&g_zeroNiPoint3 + 1); /*0x7250ac*/
    *(float *)(v4 + 0x10) = MEMORY[0xB3F9B0][0]; /*0x7250b5*/
    *(_DWORD *)(v4 + 0x20) = 0; /*0x7250b8*/
    *(_DWORD *)(v4 + 0x24) = 0; /*0x7250bf*/
  }
  else
  {
    v4 = 0; /*0x7250c8*/
  }
  sub_724DD0(this, (int)this, v4, a2); /*0x7250da*/
  return v4; /*0x7250e1*/
}
