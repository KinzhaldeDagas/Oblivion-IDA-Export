int __thiscall sub_928150(int this, int a2, int a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st7
  int result; // eax

  *(_DWORD *)(a3 + 4) = 0;
  *(float *)a3 = *(float *)(a2 + 8) - *(float *)(a2 + 4);
  v3 = fConstant_1 / *(float *)a2;
  v4 = **(float **)(a2 + 0xC);
  v5 = v4 * *(float *)(this + 8) * v4 * v3;
  if ( v5 >= *(float *)&SrcStr )
  {
    if ( v5 > fConstant_1 )
      v5 = fConstant_1;
  }
  else
  {
    v5 = *(float *)&SrcStr;
  }
  *(float *)(a3 + 0x10) = v5;
  v6 = v3 * (v4 * *(float *)(this + 0xC));
  if ( v6 >= *(float *)&SrcStr )
  {
    if ( v6 > fConstant_1 )
      v6 = fConstant_1;
  }
  else
  {
    v6 = *(float *)&SrcStr;
  }
  *(float *)(a3 + 0x14) = v6;
  *(_DWORD *)(a3 + 0x18) = 1;
  result = *(_DWORD *)(this + 0x10);
  *(_DWORD *)(a3 + 8) = result;
  *(_DWORD *)(a3 + 0xC) = *(_DWORD *)(this + 0x14);
  return result;
}
