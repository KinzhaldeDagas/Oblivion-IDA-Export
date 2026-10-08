void __stdcall sub_955C00(int a1, int a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  float v6; // [esp+4h] [ebp+4h]
  float v7; // [esp+4h] [ebp+4h]
  float v8; // [esp+4h] [ebp+4h]

  v3 = *(float *)(a1 + 0x1C); /*0x955c04*/
  v4 = *(float *)(a1 + 0x14); /*0x955c0e*/
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 0xC); /*0x955c11*/
  *(float *)(a2 + 4) = v4; /*0x955c13*/
  *(float *)(a2 + 8) = v3; /*0x955c16*/
  *(_DWORD *)(a2 + 0xC) = 0; /*0x955c19*/
  v5 = *(float *)&SrcStr; /*0x955c20*/
  v6 = *(float *)(a1 + 0x10) - *(float *)(a1 + 0xC); /*0x955c2c*/
  if ( v5 <= v6 ) /*0x955c3f*/
    v5 = v6; /*0x955c43*/
  v7 = *(float *)(a1 + 0x18) - *(float *)(a1 + 0x14); /*0x955c4d*/
  if ( v5 <= v7 ) /*0x955c5a*/
    v5 = v7; /*0x955c5e*/
  v8 = *(float *)(a1 + 0x20) - *(float *)(a1 + 0x1C); /*0x955c68*/
  if ( v5 <= v8 ) /*0x955c75*/
    v5 = v8; /*0x955c79*/
  *(float *)(a2 + 0xC) = flt_AA3554 / v5 * flt_AA3550; /*0x955c8b*/
}
