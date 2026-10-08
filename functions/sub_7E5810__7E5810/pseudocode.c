ParticleShaderProperty *__thiscall sub_7E5810(BSShaderProperty *this, void *a2)
{
  ParticleShaderProperty *v3; // eax
  ParticleShaderProperty *v4; // esi

  v3 = (ParticleShaderProperty *)FormHeapAlloc(0x128u);// Verified (Oblivion): standalone ParticleShaderProperty allocation also uses 0x128 bytes and initializes the property with an optional target context. /*0x7e583a*/
  v4 = 0; /*0x7e5846*/
  if ( v3 ) /*0x7e584e*/
    v4 = ParticleShaderProperty::ParticleShaderProperty(v3); /*0x7e5857*/
  BSShaderProperty_CopyCloneMembers(this, &v4->super, a2); /*0x7e5869*/
  return v4; /*0x7e5870*/
}
