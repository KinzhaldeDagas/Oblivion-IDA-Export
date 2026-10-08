BSShaderProperty *__thiscall sub_7C5460(BSShaderProperty *this, void *a2)
{
  SkyShaderProperty *v3; // eax
  BSShaderProperty *v4; // esi

  v3 = (SkyShaderProperty *)FormHeapAlloc(0x8Cu); /*0x7c548a*/
  v4 = 0; /*0x7c5496*/
  if ( v3 ) /*0x7c549e*/
    v4 = (BSShaderProperty *)SkyShaderProperty::SkyShaderProperty(v3); /*0x7c54a7*/
  sub_7C5340(this, v4, a2); /*0x7c54b9*/
  return v4; /*0x7c54c0*/
}
