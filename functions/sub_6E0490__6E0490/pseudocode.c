int __thiscall sub_6E0490(float *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi
  __int16 v5; // ax
  __int16 v6; // ax

  v3 = (NiTimeController *)FormHeapAlloc(0x44u);
  v4 = (int)v3;
  if ( v3 )
  {
    NiTimeController::NiTimeController(v3);
    *(_DWORD *)v4 = &NiLookAtController::`vftable';
    *(_DWORD *)(v4 + 0x40) = 0;
    *(_WORD *)(v4 + 0x3C) = 0;
    *(_BYTE *)(v4 + 0x2C) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_715D80(this, v4, a2);
  v5 = *((_WORD *)this + 0x1E);
  *(_WORD *)(v4 + 0x3C) = v5;
  if ( (*(_BYTE *)(this + 0xF) & 1) != 0 )
    v6 = v5 | 1;
  else
    v6 = v5 & 0xFFFE;
  *(_WORD *)(v4 + 0x3C) = v6;
  *(_WORD *)(v4 + 0x3C) ^= ((unsigned __int8)v6 ^ *((_BYTE *)this + 0x3C)) & 6;
  *(float *)(v4 + 0x40) = *(this + 0x10);
  return v4;
}
