// Verified (Oblivion): destructor releases the reference-counted object at TextureEffectData+0x08, then restores the NiRefObject vtable. This confirms sourceTexture_08's ownership and the base-object prefix in OblivionTextureEffectData.
void __thiscall BSShaderPPLightingProperty::TextureEffectData::~TextureEffectData(
        BSShaderPPLightingProperty::TextureEffectData *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  *(_DWORD *)this = &BSShaderPPLightingProperty::TextureEffectData::`vftable'; /*0x7d79ea*/
  v2 = *((_DWORD *)this + 2); /*0x7d79f0*/
  v3 = InterlockedDecrement; /*0x7d79f5*/
  if ( v2 ) /*0x7d7a03*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x7d7a09*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7d7a1b*/
    *((_DWORD *)this + 2) = 0; /*0x7d7a1d*/
  }
  v4 = *((_DWORD *)this + 2); /*0x7d7a24*/
  if ( v4 ) /*0x7d7a2e*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7d7a34*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7d7a46*/
  }
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x7d7a4d*/
  v3(&MEMORY[0xB3FD64]); /*0x7d7a53*/
}
