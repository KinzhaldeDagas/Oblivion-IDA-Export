// SpeedTreeShaderPPLightingProperty dtor: releases the +0xF0 STSPData reference before running the BSShaderPPLightingProperty base destructor.
void __thiscall OB_SpeedTreeShaderPPLightingProperty_dtor_010201A0(SpeedTreeShaderPPLightingProperty *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  *(_DWORD *)this = &SpeedTreeShaderPPLightingProperty::`vftable'; /*0x7f250a*/
  v2 = *((_DWORD *)this + 0x3C); /*0x7f2510*/
  v3 = InterlockedDecrement; /*0x7f2518*/
  if ( v2 ) /*0x7f2526*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x7f252c*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7f253e*/
    *((_DWORD *)this + 0x3C) = 0; /*0x7f2540*/
  }
  v4 = *((_DWORD *)this + 0x3C); /*0x7f254a*/
  if ( v4 ) /*0x7f2557*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7f255d*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7f256f*/
  }
  BSShaderPPLightingProperty::~BSShaderPPLightingProperty(this); /*0x7f257b*/
}
