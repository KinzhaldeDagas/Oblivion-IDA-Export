int __thiscall sub_8AC0F0(int this, int a2)
{
  int result; // eax
  float v4; // [esp+8h] [ebp+4h]

  *(_OWORD *)a2 = *(_OWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x30) + 0x1C) + 0x30);
  *(_OWORD *)(a2 + 0x10) = *(_OWORD *)(this + 0x10);
  *(_DWORD *)(a2 + 0x48) = *(_DWORD *)(this + 0x30);
  *(_DWORD *)(a2 + 0x20) = *(_DWORD *)(this + 0x34);
  *(_DWORD *)(a2 + 0x24) = *(_DWORD *)(this + 0x38);
  *(_DWORD *)(a2 + 0x28) = *(_DWORD *)(this + 0x5C);
  *(_OWORD *)(a2 + 0x30) = *(_OWORD *)(this + 0x40);
  *(_DWORD *)(a2 + 0x40) = *(_DWORD *)(this + 0x50);
  *(_DWORD *)(a2 + 0x44) = *(_DWORD *)(this + 0x54);
  *(_DWORD *)(a2 + 0x4C) = *(_DWORD *)(this + 0x58);
  *(_DWORD *)(a2 + 0x50) = *(_DWORD *)(this + 0x60);
  *(_DWORD *)(a2 + 0x54) = *(_DWORD *)(this + 0x64);
  *(_DWORD *)(a2 + 0x58) = *(_DWORD *)(this + 0x68);
  *(_DWORD *)(a2 + 0x5C) = *(_DWORD *)(this + 0x6C);
  *(_DWORD *)(a2 + 0x60) = *(_DWORD *)(this + 0x70);
  v4 = *(float *)(this + 0xA4);
  if ( fabs(v4) < fConstant_1 )
  {
    *(float *)(a2 + 0x64) = acos(v4);
    result = *(_DWORD *)(this + 0xA8);
    *(_DWORD *)(a2 + 0x68) = result;
  }
  else
  {
    if ( v4 <= (double)*(float *)&SrcStr )
      *(float *)(a2 + 0x64) = flt_A97BD4;
    else
      *(float *)(a2 + 0x64) = *(float *)&SrcStr;
    result = *(_DWORD *)(this + 0xA8);
    *(_DWORD *)(a2 + 0x68) = result;
  }
  return result;
}
