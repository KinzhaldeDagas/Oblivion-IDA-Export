HairShaderProperty *__thiscall sub_882A60(BSShaderPPLightingProperty *this, void *a2)
{
  HairShaderProperty *v3; // eax
  BSShaderPPLightingProperty *v4; // esi

  v3 = (HairShaderProperty *)FormHeapAlloc(0x170u); /*0x882a8a*/
  v4 = 0; /*0x882a96*/
  if ( v3 ) /*0x882a9e*/
    v4 = HairShaderProperty::HairShaderProperty(v3); /*0x882aa7*/
  sub_8827E0(this, v4, a2); /*0x882ab9*/
  return v4; /*0x882ac0*/
}
