// Oblivion virtual clone constructor for Lighting30ShaderProperty. Allocates exactly 0x108 bytes, runs the BSShaderPPLightingProperty base constructor, stores exact vptr A9576C, zeroes the derived fields, then copies clone members. This is the second live-object creation route and preserves the exact class vptr.
Lighting30ShaderProperty *__thiscall Lighting30ShaderProperty_CreateClone(
        Lighting30ShaderProperty *this,
        int cloningProcess)
{
  BSShaderPPLightingProperty *v3; // eax
  BSShaderPPLightingProperty *v4; // esi

  v3 = (BSShaderPPLightingProperty *)FormHeapAlloc(0x108u); /*0x86374a*/
  v4 = v3; /*0x86374f*/
  if ( v3 ) /*0x863762*/
  {
    BSShaderPPLightingProperty::BSShaderPPLightingProperty(v3); /*0x863766*/
    *(_DWORD *)v4 = &Lighting30ShaderProperty_vftable;// Clone creation route: store exact Lighting30ShaderProperty vptr A9576C after base construction. /*0x86376d*/
    *((float *)v4 + 0x3C) = 0.0; /*0x863773*/
    *((float *)v4 + 0x3D) = 0.0; /*0x863779*/
    *((float *)v4 + 0x3E) = 0.0; /*0x86377f*/
    *((float *)v4 + 0x3F) = 0.0; /*0x863785*/
    *((_DWORD *)v4 + 0x41) = 0; /*0x86378b*/
  }
  else
  {
    v4 = 0; /*0x863797*/
  }
  Lighting30ShaderProperty__CopyToMembers(this, v4, cloningProcess); /*0x8637a9*/
  return v4; /*0x8637b0*/
}
