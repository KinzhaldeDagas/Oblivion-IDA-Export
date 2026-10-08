TallGrassShaderProperty *__thiscall sub_7C34D0(char **this, int a2)
{
  TallGrassShaderProperty *v3; // eax
  TallGrassShaderProperty *v4; // esi

  v3 = (TallGrassShaderProperty *)FormHeapAlloc(0xB0u); /*0x7c34fa*/
  v4 = 0; /*0x7c3506*/
  if ( v3 ) /*0x7c350e*/
    v4 = TallGrassShaderProperty::TallGrassShaderProperty(v3); /*0x7c3517*/
  sub_7C2DF0(this, v4, a2); /*0x7c3529*/
  return v4; /*0x7c3530*/
}
