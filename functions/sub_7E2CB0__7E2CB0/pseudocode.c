BSShaderProperty *__thiscall sub_7E2CB0(char **this, int a2)
{
  BSShaderProperty *v3; // eax
  BSShaderProperty *v4; // esi

  v3 = (BSShaderProperty *)FormHeapAlloc(0x6Cu); /*0x7e2cd7*/
  if ( v3 ) /*0x7e2ced*/
    v4 = BSShaderProperty::BSShaderProperty(v3); /*0x7e2cf6*/
  else
    v4 = 0; /*0x7e2cfa*/
  sub_73DA70(this, (int)v4, a2); /*0x7e2d0c*/
  v4->member.passInfo = (UInt32)*(this + 7); /*0x7e2d14*/
  v4->member.alpha = *((float *)this + 8); /*0x7e2d1a*/
  v4->member.lastRenderPassState = 0; /*0x7e2d1d*/
  return v4; /*0x7e2d26*/
}
