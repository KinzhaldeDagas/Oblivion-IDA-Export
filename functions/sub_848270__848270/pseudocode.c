// Oblivion mode-5 skinned opaque ShadowLight enqueuer. Reuses pool[8]; its one configured stage remains unbound and is ignored by SLS2060. Uses SLS2054/SLS2060.
void __thiscall ShadowLightShader_EnqueueMode5SkinnedOpaquePass(
        NiTArray_NiD3DPass *this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  NiD3DPass *v6; // edi
  unsigned int v8; // [esp-8h] [ebp-28h]
  NiD3DPass *value; // [esp+10h] [ebp-10h] BYREF
  unsigned int v10; // [esp+1Ch] [ebp-4h]

  v6 = ShadowLightMode5SkinnedOpaquePass;       // Pool[8] skinned opaque caster pass using SLS2054/SLS2060. /*0x848296*/
  value = ShadowLightMode5SkinnedOpaquePass; /*0x84829e*/
  if ( value ) /*0x8482a7*/
    ++v6->RefCount; /*0x8482a9*/
  v8 = *((_DWORD *)this + 0xE); /*0x8482b4*/
  v10 = 0; /*0x8482b8*/
  NiTArray_NiD3DPass_SetAt(this + 4, v8, &value); /*0x8482c0*/
  v10 = 0xFFFFFFFF; /*0x8482ca*/
  if ( v6 ) /*0x8482ce*/
  {
    if ( v6->RefCount-- == 1 ) /*0x8482d0*/
      NiD3DPass_ReleaseToPool(v6); /*0x8482d7*/
  }
  ++*((_DWORD *)this + 0xE); /*0x8482dc*/
}
