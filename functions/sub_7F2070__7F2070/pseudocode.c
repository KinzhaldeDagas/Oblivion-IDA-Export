// Branch shader-property clone helper. Allocates 0xF4, copies STSPData via virtual +0xA0, and installs BranchShaderProperty vtable.
OB_SpeedTreeBranchShaderProperty_010201A0 *__thiscall OB_SpeedTreeBranchShaderProperty_ClonePreserveSTSP_010201A0(
        OB_SpeedTreeBranchShaderProperty_010201A0 *this)
{
  SpeedTreeShaderPPLightingProperty *v2; // esi
  OB_SpeedTreeBranchShaderProperty_010201A0 *result; // eax
  int v4; // eax

  v2 = (SpeedTreeShaderPPLightingProperty *)FormHeapAlloc(0xF4u); /*0x7f209f*/
  result = 0; /*0x7f20a8*/
  if ( v2 ) /*0x7f20b0*/
  {
    v4 = (*(int (__thiscall **)(OB_SpeedTreeBranchShaderProperty_010201A0 *))(*(_DWORD *)this->gap0 + 0xA0))(this); /*0x7f20bc*/
    OB_SpeedTreeShaderPPLightingProperty_ctor_010201A0(v2, v4); /*0x7f20c1*/
    *(_DWORD *)v2 = &SpeedTreeBranchShaderProperty::`vftable'; /*0x7f20c6*/
    return (OB_SpeedTreeBranchShaderProperty_010201A0 *)v2; /*0x7f20cc*/
  }
  return result; /*0x7f20ce*/
}
