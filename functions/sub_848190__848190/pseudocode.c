// Oblivion mode-5 rigid alpha-tested ShadowLight enqueuer. Reuses pool[7], binds shader-property texture 0/BaseMap to stage 0, optionally applies the property address preset, and uses SLS2053/SLS2059.
void __thiscall ShadowLightShader_EnqueueMode5RigidAlphaTestPass(
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

  v6 = ShadowLightMode5RigidAlphaTestPass;      // Pool[7] rigid alpha-tested caster pass. Its single texture stage receives shader-property texture index 0/BaseMap. /*0x8481b7*/
  Stage = ShadowLightMode5RigidAlphaTestPass->Stages.data->Stage; /*0x8481c6*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x8481d0*/
  v9 = *(_DWORD *)(Stage + 4); /*0x8481d2*/
  v11 = v8; /*0x8481d7*/
  if ( v9 != v8 ) /*0x8481db*/
  {
    if ( v9 ) /*0x8481df*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x8481e5*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x8481fb*/
      v8 = v11; /*0x8481fd*/
    }
    *(_DWORD *)(Stage + 4) = v8; /*0x848203*/
    if ( v8 ) /*0x848206*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x84820c*/
  }
  sub_848FA0((_DWORD **)Stage, (int)value); /*0x84821a*/
  ++v6->RefCount; /*0x848224*/
  value = v6; /*0x848227*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84823f*/
  if ( v6->RefCount-- == 1 ) /*0x848247*/
    NiD3DPass_ReleaseToPool(v6); /*0x848252*/
  ++*((_DWORD *)this + 0xE); /*0x848257*/
}
