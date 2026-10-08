int SunDamageEffect_Remove()
{
  int result; // eax

  if ( !OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x6a6aa0*/
    return sub_7B4830(dword_B06D3C, dword_B06D44, flt_B06D4C, flt_B06D5C, flt_B06D64, dword_B06D54); /*0x6a6ae6*/
  flt_B2C7A4 = 1.0; /*0x6a6aab*/
  return result; /*0x6a6ab1*/
}
