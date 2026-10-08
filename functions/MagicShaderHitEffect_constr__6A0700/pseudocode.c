NiObject *__thiscall MagicShaderHitEffect_constr(NiObject *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  int v3; // edi
  int v4; // edi
  int v5; // edi

  MagicHitEffect_constr(this); /*0x6a072b*/
  this->__vftable = (NiObjectVtbl *)&MagicShaderHitEffect::`vftable';// Verified (Oblivion): constructor initializes a 0x4C-byte shader hit effect. +0x28 is bWeaponEnchantment_28, set true by Process_UpdateWeaponEnchantmentShader after resolving an equipped enchantment's EffectSetting.enchantEffect. +0x30 TESBoundObject*, +0x34 TESEffectShader*, +0x38 visual elapsed timer, +0x3C ParticleShaderProperty*, +0x40 NiNode*, +0x44 perspective state, and +0x48 TextureEffectData* are supported by field use/construction/destruction. /*0x6a0732*/
  *((_DWORD *)this + 0xF) = 0; /*0x6a073c*/
  *((_DWORD *)this + 0x10) = 0; /*0x6a073f*/
  *((_DWORD *)this + 0x12) = 0; /*0x6a0742*/
  v2 = InterlockedDecrement; /*0x6a0745*/
  *((_DWORD *)this + 0xD) = 0; /*0x6a074b*/
  v3 = *((_DWORD *)this + 0x12); /*0x6a074e*/
  if ( v3 ) /*0x6a0758*/
  {
    if ( !v2((volatile LONG *)(v3 + 4)) ) /*0x6a075e*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6a0770*/
    *((_DWORD *)this + 0x12) = 0; /*0x6a0772*/
  }
  *((float *)this + 0xE) = 0.0; /*0x6a0777*/
  v4 = *((_DWORD *)this + 0xF); /*0x6a077a*/
  if ( v4 ) /*0x6a077f*/
  {
    if ( !v2((volatile LONG *)(v4 + 4)) ) /*0x6a0785*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6a0797*/
    *((_DWORD *)this + 0xF) = 0; /*0x6a0799*/
  }
  v5 = *((_DWORD *)this + 0x10); /*0x6a079c*/
  if ( v5 ) /*0x6a07a1*/
  {
    if ( !v2((volatile LONG *)(v5 + 4)) ) /*0x6a07a7*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6a07b9*/
    *((_DWORD *)this + 0x10) = 0; /*0x6a07bb*/
  }
  *((_BYTE *)this + 0x28) = 0; /*0x6a07be*/
  *((_DWORD *)this + 0xB) = 0xFFFFFFFF;         // Verified (Oblivion): shader field +0x2C is initialized to 0xFFFFFFFF and serialized as a raw dword for save version >= 0x37; semantic meaning remains Unknown. /*0x6a07c1*/
  *((_DWORD *)this + 0xC) = 0; /*0x6a07c8*/
  *((_BYTE *)this + 0x44) = 0;                  // Verified (Oblivion): shader byte +0x44 initializes to zero and is later read/written during player perspective restoration; meaning is Probable perspective-state byte. /*0x6a07cb*/
  return this; /*0x6a07d0*/
}
