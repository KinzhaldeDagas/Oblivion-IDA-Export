// Verified (Oblivion): constructor zeroes the four OblivionColorA groups from +0x0C through +0x48 and the U/V offsets, edge exponent and bound diameter; it initializes blend/Z-test parameters to 2,1,1,3. The 0x6C allocation and this field sequence define OblivionTextureEffectData.
BSShaderPPLightingProperty::TextureEffectData *__thiscall BSShaderPPLightingProperty::TextureEffectData::TextureEffectData(
        BSShaderPPLightingProperty::TextureEffectData *this)
{
  double v2; // st7
  int v3; // edi

  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x7d78d1*/
  *((_DWORD *)this + 1) = 0; /*0x7d78d7*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x7d78da*/
  *(_DWORD *)this = &BSShaderPPLightingProperty::TextureEffectData::`vftable'; /*0x7d78e0*/
  *((_DWORD *)this + 2) = 0; /*0x7d78ea*/
  v2 = 0.0; /*0x7d78ed*/
  *((float *)this + 3) = 0.0; /*0x7d78ef*/
  *((float *)this + 4) = 0.0; /*0x7d78f7*/
  *((float *)this + 5) = 0.0; /*0x7d78fa*/
  *((float *)this + 6) = 0.0; /*0x7d78fd*/
  *((float *)this + 7) = 0.0; /*0x7d7900*/
  *((float *)this + 8) = 0.0; /*0x7d7903*/
  *((float *)this + 9) = 0.0; /*0x7d7906*/
  *((float *)this + 0xA) = 0.0; /*0x7d7909*/
  *((float *)this + 0xB) = 0.0; /*0x7d790c*/
  *((float *)this + 0xC) = 0.0; /*0x7d790f*/
  *((float *)this + 0xD) = 0.0; /*0x7d7912*/
  *((float *)this + 0xE) = 0.0; /*0x7d7915*/
  *((float *)this + 0xF) = 0.0; /*0x7d7918*/
  *((float *)this + 0x10) = 0.0; /*0x7d791b*/
  *((float *)this + 0x11) = 0.0; /*0x7d791e*/
  *((float *)this + 0x12) = 0.0; /*0x7d7921*/
  v3 = *((_DWORD *)this + 2); /*0x7d7924*/
  if ( v3 ) /*0x7d7929*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7d7931*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7d7947*/
    v2 = 0.0; /*0x7d7949*/
    *((_DWORD *)this + 2) = 0; /*0x7d794b*/
  }
  *((float *)this + 3) = v2; /*0x7d794e*/
  *((float *)this + 4) = v2; /*0x7d7953*/
  *((float *)this + 5) = v2; /*0x7d7956*/
  *((float *)this + 6) = v2; /*0x7d7959*/
  *((float *)this + 7) = v2; /*0x7d795c*/
  *((float *)this + 8) = v2; /*0x7d795f*/
  *((float *)this + 9) = v2; /*0x7d7962*/
  *((float *)this + 0xA) = v2; /*0x7d7965*/
  *((float *)this + 0xB) = v2; /*0x7d7968*/
  *((float *)this + 0xC) = v2; /*0x7d796b*/
  *((float *)this + 0xD) = v2; /*0x7d796e*/
  *((float *)this + 0xE) = v2; /*0x7d7971*/
  *((float *)this + 0xF) = v2; /*0x7d7974*/
  *((float *)this + 0x10) = v2; /*0x7d7977*/
  *((float *)this + 0x11) = v2; /*0x7d797a*/
  *((float *)this + 0x12) = v2; /*0x7d797d*/
  *((_DWORD *)this + 0x17) = 2; /*0x7d7980*/
  *((float *)this + 0x13) = v2; /*0x7d7987*/
  *((_DWORD *)this + 0x18) = 1; /*0x7d798a*/
  *((float *)this + 0x14) = v2; /*0x7d7991*/
  *((_DWORD *)this + 0x19) = 1; /*0x7d7994*/
  *((float *)this + 0x15) = v2; /*0x7d799b*/
  *((_DWORD *)this + 0x1A) = 3; /*0x7d799e*/
  *((float *)this + 0x16) = v2; /*0x7d79a5*/
  return this; /*0x7d79a8*/
}
