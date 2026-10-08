int __thiscall sub_928150(int this, int a2, int a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st7
  int result; // eax

  *(_DWORD *)(a3 + 4) = 0; /*0x928158*/
  *(float *)a3 = *(float *)(a2 + 8) - *(float *)(a2 + 4); /*0x928165*/
  v3 = fConstant_1 / *(float *)a2; /*0x92816d*/
  v4 = **(float **)(a2 + 0xC); /*0x928172*/
  v5 = v4 * *(float *)(this + 8) * v4 * v3; /*0x92817b*/
  if ( v5 >= *(float *)&SrcStr ) /*0x928188*/
  {
    if ( v5 > fConstant_1 ) /*0x92819f*/
      v5 = fConstant_1; /*0x9281a3*/
  }
  else
  {
    v5 = *(float *)&SrcStr; /*0x92818c*/
  }
  *(float *)(a3 + 0x10) = v5; /*0x9281a9*/
  v6 = v3 * (v4 * *(float *)(this + 0xC)); /*0x9281af*/
  if ( v6 >= *(float *)&SrcStr ) /*0x9281bc*/
  {
    if ( v6 > fConstant_1 ) /*0x9281d3*/
      v6 = fConstant_1; /*0x9281d7*/
  }
  else
  {
    v6 = *(float *)&SrcStr; /*0x9281c0*/
  }
  *(float *)(a3 + 0x14) = v6; /*0x9281dd*/
  *(_DWORD *)(a3 + 0x18) = 1; /*0x9281e0*/
  result = *(_DWORD *)(this + 0x10); /*0x9281e7*/
  *(_DWORD *)(a3 + 8) = result; /*0x9281ea*/
  *(_DWORD *)(a3 + 0xC) = *(_DWORD *)(this + 0x14); /*0x9281f0*/
  return result; /*0x9281f3*/
}
