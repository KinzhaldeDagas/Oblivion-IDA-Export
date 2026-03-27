BSShaderProperty *__thiscall sub_7E2CB0(char **this, int a2)
{
  BSShaderProperty *v3; // eax
  BSShaderProperty *v4; // esi

  v3 = (BSShaderProperty *)FormHeapAlloc(0x6Cu);
  if ( v3 )
    v4 = BSShaderProperty::BSShaderProperty(v3);
  else
    v4 = 0;
  sub_73DA70(this, (int)v4, a2);
  v4->member.passInfo = (UInt32)*(this + 7);
  v4->member.alpha = *((float *)this + 8);
  v4->member.lastRenderPassState = 0;
  return v4;
}
