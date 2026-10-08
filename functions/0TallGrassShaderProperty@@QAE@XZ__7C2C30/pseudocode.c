TallGrassShaderProperty *__thiscall TallGrassShaderProperty::TallGrassShaderProperty(TallGrassShaderProperty *this)
{
  int v2; // edi

  BSShaderLightingProperty::BSShaderLightingProperty((BSShaderLightingPropertyLayout_t *)this); /*0x7c2c5a*/
  *(_DWORD *)this = &TallGrassShaderProperty::`vftable'; /*0x7c2c61*/
  *((_DWORD *)this + 0x28) = 0; /*0x7c2c6b*/
  *((_DWORD *)this + 0x29) = 0; /*0x7c2c71*/
  v2 = *((_DWORD *)this + 0x28); /*0x7c2c77*/
  if ( v2 ) /*0x7c2c84*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x7c2c8a*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7c2ca0*/
    *((_DWORD *)this + 0x28) = 0; /*0x7c2ca2*/
  }
  *((_DWORD *)this + 0x27) = 0; /*0x7c2caa*/
  return this; /*0x7c2cb0*/
}
