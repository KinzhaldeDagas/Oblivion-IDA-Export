// Oblivion Lighting30ShaderProperty destructor. Reasserts the exact A9576C derived vptr during derived cleanup, releases/nulls the +0x104 reference member, then invokes BSShaderPPLightingProperty destruction. The accumulator cannot encounter this transition while traversing the live property-owned pass list.
void __thiscall Lighting30ShaderProperty_Destructor(Lighting30ShaderProperty *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  *(_DWORD *)this = &Lighting30ShaderProperty_vftable;// Derived destructor reasserts exact vptr A9576C while cleaning Lighting30 members before base destruction. /*0x8634aa*/
  v2 = *((_DWORD *)this + 0x41); /*0x8634b0*/
  v3 = InterlockedDecrement; /*0x8634b8*/
  if ( v2 ) /*0x8634c6*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x8634cc*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x8634de*/
    *((_DWORD *)this + 0x41) = 0; /*0x8634e0*/
  }
  v4 = *((_DWORD *)this + 0x41); /*0x8634ea*/
  if ( v4 ) /*0x8634f7*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x8634fd*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x86350f*/
  }
  BSShaderPPLightingProperty::~BSShaderPPLightingProperty(this); /*0x86351b*/
}
