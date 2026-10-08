// Oblivion mode-5 skinned alpha-tested ShadowLight enqueuer. Reuses pool[9], binds shader-property texture 0/BaseMap to stage 0, optionally applies the property address preset, and uses SLS2055/SLS2061.
void __thiscall ShadowLightShader_EnqueueMode5SkinnedAlphaTestPass(
        NiTArray_NiD3DPass *this,
        int a2,
        int a3,
        int a4,
        NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  UInt32 Stage; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+14h] [ebp-10h]

  v6 = ShadowLightMode5SkinnedAlphaTestPass;    // Pool[9] skinned alpha-tested caster pass. Its single texture stage receives shader-property texture index 0/BaseMap. /*0x848327*/
  Stage = ShadowLightMode5SkinnedAlphaTestPass->Stages.data->Stage; /*0x848336*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x848340*/
  v9 = *(_DWORD *)(Stage + 4); /*0x848342*/
  v11 = v8; /*0x848347*/
  if ( v9 != v8 ) /*0x84834b*/
  {
    if ( v9 ) /*0x84834f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x848355*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x84836b*/
      v8 = v11; /*0x84836d*/
    }
    *(_DWORD *)(Stage + 4) = v8; /*0x848373*/
    if ( v8 ) /*0x848376*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x84837c*/
  }
  sub_848FA0((_DWORD **)Stage, (int)value); /*0x84838a*/
  ++v6->RefCount; /*0x848394*/
  value = v6; /*0x848397*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x8483af*/
  if ( v6->RefCount-- == 1 ) /*0x8483b7*/
    NiD3DPass_ReleaseToPool(v6); /*0x8483c2*/
  ++*((_DWORD *)this + 0xE); /*0x8483c7*/
}
