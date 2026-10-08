// SpeedTreeShaderPPLightingProperty ctor used by BranchShaderProperty: constructs BSShaderPPLightingProperty base, zeroes +0xF0, then AddRefs incoming STSPData at +0xF0.
SpeedTreeShaderPPLightingProperty *__thiscall OB_SpeedTreeShaderPPLightingProperty_ctor_010201A0(
        SpeedTreeShaderPPLightingProperty *this,
        int a2)
{
  int v3; // edi

  BSShaderPPLightingProperty::BSShaderPPLightingProperty(this); /*0x7f244a*/
  *(_DWORD *)this = &SpeedTreeShaderPPLightingProperty::`vftable'; /*0x7f244f*/
  *((_DWORD *)this + 0x3C) = 0; /*0x7f245d*/
  v3 = *((_DWORD *)this + 0x3C); /*0x7f2467*/
  if ( v3 != a2 ) /*0x7f2478*/
  {
    if ( v3 ) /*0x7f247c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7f2482*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7f2498*/
    }
    *((_DWORD *)this + 0x3C) = a2; /*0x7f249c*/
    if ( a2 ) /*0x7f24a2*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x7f24a8*/
  }
  return this; /*0x7f24b0*/
}
