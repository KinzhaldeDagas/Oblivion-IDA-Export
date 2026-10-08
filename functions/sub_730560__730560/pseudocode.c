int sub_730560()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x1Cu); /*0x730589*/
  result = 0; /*0x730592*/
  if ( v0 ) /*0x73059a*/
  {
    sub_721350((NiObject *)v0); /*0x73059e*/
    *(_DWORD *)v0 = &NiColorExtraData::`vftable'; /*0x7305a5*/
    *(float *)(v0 + 0xC) = 0.0; /*0x7305ab*/
    *(float *)(v0 + 0x10) = 0.0; /*0x7305ae*/
    *(float *)(v0 + 0x14) = 0.0; /*0x7305b1*/
    *(float *)(v0 + 0x18) = 0.0; /*0x7305b4*/
    *(_DWORD *)(v0 + 0xC) = dword_B25AD0; /*0x7305bc*/
    *(_DWORD *)(v0 + 0x10) = dword_B25AD4; /*0x7305c5*/
    *(_DWORD *)(v0 + 0x14) = dword_B25AD8; /*0x7305ce*/
    *(_DWORD *)(v0 + 0x18) = dword_B25ADC; /*0x7305d6*/
    return v0; /*0x7305d9*/
  }
  return result; /*0x7305db*/
}
