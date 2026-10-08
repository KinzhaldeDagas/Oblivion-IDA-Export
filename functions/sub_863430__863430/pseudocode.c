// Constructs an exact 0x108-byte Oblivion Lighting30ShaderProperty after the BSShaderPPLightingProperty base constructor. Stores Lighting30ShaderProperty_vftable (A9576C) at object+0 and zero-initializes derived fields through +0x104.
Lighting30ShaderProperty *__thiscall Lighting30ShaderProperty_Constructor(Lighting30ShaderProperty *this)
{
  BSShaderPPLightingProperty::BSShaderPPLightingProperty(this); /*0x863433*/
  *(_DWORD *)this = &Lighting30ShaderProperty_vftable;// Primary live-object creation route: store exact Lighting30ShaderProperty vptr A9576C after the PP-lighting base constructor. /*0x86343a*/
  *((float *)this + 0x3C) = 0.0; /*0x863440*/
  *((float *)this + 0x3D) = 0.0; /*0x863446*/
  *((float *)this + 0x3E) = 0.0; /*0x86344e*/
  *((float *)this + 0x3F) = 0.0; /*0x863454*/
  *((_DWORD *)this + 0x41) = 0; /*0x86345a*/
  return this; /*0x863464*/
}
