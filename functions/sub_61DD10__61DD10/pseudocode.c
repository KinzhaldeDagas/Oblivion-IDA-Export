int __thiscall sub_61DD10(int this, int a2)
{
  double v2; // st7
  double v3; // st7
  int result; // eax
  float v5; // [esp+4h] [ebp-4h]

  v2 = *(float *)(this + 0x44);
  *(_BYTE *)(this + 0x48) = 0;
  *(float *)(this + 0xD4) = v2;
  *(float *)(this + 0xD8) = flt_A3D65C;
  v3 = flt_A30634;
  *(float *)(this + 0xDC) = flt_A30634;
  result = *(_DWORD *)(this + 0x6C);
  if ( result == 0xD )
    goto LABEL_14;
  if ( result == 4 )
    *(float *)(this + 0xCC) = v3;
  if ( result == 6 )
    *(_DWORD *)(this + 0x12C) = 0;
  if ( result == 4 )
  {
    v5 = flt_B36F70;
    *(float *)(this + 0xEC) = *(float *)(this + 0x44);
    *(float *)(this + 0xF0) = v5;
    *(float *)(this + 0xF4) = v3;
  }
  result = *(_DWORD *)(this + 0x6C);
  if ( result == 4 || result == 7 || result == 9 || result == 8 )
  {
LABEL_14:
    *(_DWORD *)(this + 0x6C) = 0xD;
  }
  else
  {
    *(_DWORD *)(this + 0x6C) = 0xD;
    if ( result != 0xC )
      *(_BYTE *)(this + 0x191) = 1;
  }
  return result;
}
