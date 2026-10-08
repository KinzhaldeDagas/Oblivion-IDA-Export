//
//
// [2026-10-03 ownership follow-through] Verified property+A4 takes one reference to supplied STSPData; destructor 0x7F2690 releases it. STSPData destructor 0x7F23D0 frees stream+8 when ushort+C is nonzero. Plugin additional-data block borrows this stream (copyData=false); do not separately retain/free a cached stream pointer.
SpeedTreeShaderLightingProperty *__thiscall OB_SpeedTreeShaderLightingProperty_ctorWithSTSP_010201A0(
        SpeedTreeShaderLightingProperty *this,
        OB_STSPData_010201A0 *data)
{
  int v3; // edi

  BSShaderLightingProperty::BSShaderLightingProperty(this); /*0x7f25cb*/
  *(_DWORD *)this = &SpeedTreeShaderLightingProperty::`vftable'; /*0x7f25d2*/
  *((_DWORD *)this + 0x27) = 0; /*0x7f25dc*/
  *((_DWORD *)this + 0x29) = 0; /*0x7f25e2*/
  if ( data ) /*0x7f25f5*/
  {
    *((_DWORD *)this + 0x29) = data; /*0x7f2619*/
    InterlockedIncrement(&data->refCount); /*0x7f2625*/
  }
  v3 = *((_DWORD *)this + 0x27); /*0x7f262b*/
  if ( v3 ) /*0x7f2633*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7f2639*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7f264f*/
    *((_DWORD *)this + 0x27) = 0; /*0x7f2651*/
  }
  *((_DWORD *)this + 0x28) = 1; /*0x7f2659*/
  return this; /*0x7f2663*/
}
