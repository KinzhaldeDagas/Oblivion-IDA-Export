void __stdcall sub_955C00(int a1, int a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  float v6; // [esp+4h] [ebp+4h]
  float v7; // [esp+4h] [ebp+4h]
  float v8; // [esp+4h] [ebp+4h]

  v3 = *(float *)(a1 + 0x1C);
  v4 = *(float *)(a1 + 0x14);
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 0xC);
  *(float *)(a2 + 4) = v4;
  *(float *)(a2 + 8) = v3;
  *(_DWORD *)(a2 + 0xC) = 0;
  v5 = *(float *)&SrcStr;
  v6 = *(float *)(a1 + 0x10) - *(float *)(a1 + 0xC);
  if ( v5 <= v6 )
    v5 = v6;
  v7 = *(float *)(a1 + 0x18) - *(float *)(a1 + 0x14);
  if ( v5 <= v7 )
    v5 = v7;
  v8 = *(float *)(a1 + 0x20) - *(float *)(a1 + 0x1C);
  if ( v5 <= v8 )
    v5 = v8;
  *(float *)(a2 + 0xC) = flt_AA3554 / v5 * flt_AA3550;
}
