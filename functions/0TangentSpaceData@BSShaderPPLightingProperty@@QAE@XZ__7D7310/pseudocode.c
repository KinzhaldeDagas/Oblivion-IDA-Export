//
//
// [2026-10-02 tangent ownership pass] Verified 0x14-byte NiRefObject-derived TangentSpaceData. Constructor stores ownsArrays byte at +8 and clears tangent pointer +0x0C and binormal pointer +0x10. Stock branch builder 0x5616F0 supplies independent arrays with ownership flag 1.
BSShaderPPLightingProperty::TangentSpaceData *__thiscall BSShaderPPLightingProperty::TangentSpaceData::TangentSpaceData(
        BSShaderPPLightingProperty::TangentSpaceData *this,
        char a2)
{
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x7d7318*/
  *((_DWORD *)this + 1) = 0; /*0x7d731e*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x7d7325*/
  *((_BYTE *)this + 8) = a2; /*0x7d732f*/
  *(_DWORD *)this = &BSShaderPPLightingProperty::TangentSpaceData::`vftable'; /*0x7d7332*/
  *((_DWORD *)this + 3) = 0; /*0x7d7338*/
  *((_DWORD *)this + 4) = 0; /*0x7d733f*/
  return this; /*0x7d7348*/
}
