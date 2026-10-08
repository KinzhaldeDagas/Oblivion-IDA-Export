int __thiscall sub_6E0490(float *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi
  __int16 v5; // ax
  __int16 v6; // ax

  v3 = (NiTimeController *)FormHeapAlloc(0x44u); /*0x6e04b8*/
  v4 = (int)v3; /*0x6e04bd*/
  if ( v3 ) /*0x6e04ce*/
  {
    NiTimeController::NiTimeController(v3); /*0x6e04d2*/
    *(_DWORD *)v4 = &NiLookAtController::`vftable'; /*0x6e04d7*/
    *(_DWORD *)(v4 + 0x40) = 0; /*0x6e04dd*/
    *(_WORD *)(v4 + 0x3C) = 0; /*0x6e04e0*/
    *(_BYTE *)(v4 + 0x2C) = 0; /*0x6e04e4*/
  }
  else
  {
    v4 = 0; /*0x6e04e9*/
  }
  NiTimeController_CopyMembers(this, v4, a2); /*0x6e04fb*/
  v5 = *((_WORD *)this + 0x1E); /*0x6e0500*/
  *(_WORD *)(v4 + 0x3C) = v5; /*0x6e0504*/
  if ( (*(_BYTE *)(this + 0xF) & 1) != 0 ) /*0x6e050c*/
    v6 = v5 | 1; /*0x6e050e*/
  else
    v6 = v5 & 0xFFFE; /*0x6e0513*/
  *(_WORD *)(v4 + 0x3C) = v6; /*0x6e0518*/
  *(_WORD *)(v4 + 0x3C) ^= ((unsigned __int8)v6 ^ *((_BYTE *)this + 0x3C)) & 6; /*0x6e0527*/
  *(float *)(v4 + 0x40) = *(this + 0x10); /*0x6e052e*/
  return v4; /*0x6e0531*/
}
