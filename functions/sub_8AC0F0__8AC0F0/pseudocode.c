int __thiscall sub_8AC0F0(int this, int a2)
{
  int result; // eax
  float v4; // [esp+8h] [ebp+4h]

  *(_OWORD *)a2 = *(_OWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x30) + 0x1C) + 0x30); /*0x8ac102*/
  *(_OWORD *)(a2 + 0x10) = *(_OWORD *)(this + 0x10); /*0x8ac109*/
  *(_DWORD *)(a2 + 0x48) = *(_DWORD *)(this + 0x30); /*0x8ac110*/
  *(_DWORD *)(a2 + 0x20) = *(_DWORD *)(this + 0x34); /*0x8ac116*/
  *(_DWORD *)(a2 + 0x24) = *(_DWORD *)(this + 0x38); /*0x8ac11c*/
  *(_DWORD *)(a2 + 0x28) = *(_DWORD *)(this + 0x5C); /*0x8ac122*/
  *(_OWORD *)(a2 + 0x30) = *(_OWORD *)(this + 0x40); /*0x8ac129*/
  *(_DWORD *)(a2 + 0x40) = *(_DWORD *)(this + 0x50); /*0x8ac130*/
  *(_DWORD *)(a2 + 0x44) = *(_DWORD *)(this + 0x54); /*0x8ac136*/
  *(_DWORD *)(a2 + 0x4C) = *(_DWORD *)(this + 0x58); /*0x8ac13c*/
  *(_DWORD *)(a2 + 0x50) = *(_DWORD *)(this + 0x60); /*0x8ac142*/
  *(_DWORD *)(a2 + 0x54) = *(_DWORD *)(this + 0x64); /*0x8ac148*/
  *(_DWORD *)(a2 + 0x58) = *(_DWORD *)(this + 0x68); /*0x8ac14e*/
  *(_DWORD *)(a2 + 0x5C) = *(_DWORD *)(this + 0x6C); /*0x8ac154*/
  *(_DWORD *)(a2 + 0x60) = *(_DWORD *)(this + 0x70); /*0x8ac15a*/
  v4 = *(float *)(this + 0xA4); /*0x8ac163*/
  if ( fabs(v4) < fConstant_1 ) /*0x8ac178*/
  {
    *(float *)(a2 + 0x64) = acos(v4); /*0x8ac1c2*/
    result = *(_DWORD *)(this + 0xA8); /*0x8ac1c5*/
    *(_DWORD *)(a2 + 0x68) = result; /*0x8ac1cb*/
  }
  else
  {
    if ( v4 <= (double)*(float *)&SrcStr ) /*0x8ac189*/
      *(float *)(a2 + 0x64) = flt_A97BD4; /*0x8ac1a8*/
    else
      *(float *)(a2 + 0x64) = *(float *)&SrcStr; /*0x8ac191*/
    result = *(_DWORD *)(this + 0xA8); /*0x8ac194*/
    *(_DWORD *)(a2 + 0x68) = result; /*0x8ac19a*/
  }
  return result; /*0x8ac19e*/
}
