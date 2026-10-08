SpeedTreeBranchShaderProperty *__thiscall OB_SpeedTreeBranchShaderProperty_ScalarDtor_010201A0(
        SpeedTreeBranchShaderProperty *this,
        char a2)
{
  *(_DWORD *)this = &SpeedTreeBranchShaderProperty::`vftable'; /*0x7f2153*/
  OB_SpeedTreeShaderPPLightingProperty_dtor_010201A0(this); /*0x7f2159*/
  if ( (a2 & 1) != 0 ) /*0x7f2163*/
    FormHeapFree((unsigned int)this); /*0x7f2166*/
  return this; /*0x7f2170*/
}
