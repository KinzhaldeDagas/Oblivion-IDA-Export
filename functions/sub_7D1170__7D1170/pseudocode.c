// Creates and stores 419 Oblivion ShadowLightShader passes and assigns their constant maps. Pool[6..9] are the mode-5 rigid opaque, rigid alpha-tested, skinned opaque, and skinned alpha-tested caster passes initialized by the native stage/pass table.
bool __thiscall ShadowLightShader__LoadStagesAndPasses(void *this)
{
  unsigned int i; // ebx
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  int v7; // esi
  int v8; // edi
  int *v9; // esi
  int v10; // ebp
  NiD3DPass *v12[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v13; // [esp+24h] [ebp-4h]

  v12[1] = (NiD3DPass *)this; /*0x7d1197*/
  for ( i = 0; i < 0x1A3; ++i ) /*0x7d119b*/
  {
    v2 = NiD3DPassPool_Acquire(v12); /*0x7d11aa*/
    v3 = (NiD3DPass *)g_ShadowLightPassBySelector[i]; /*0x7d11ac*/
    v4 = v3 == *v2; /*0x7d11b2*/
    v13 = 0; /*0x7d11b4*/
    if ( !v4 ) /*0x7d11bc*/
    {
      if ( v3 ) /*0x7d11c0*/
      {
        v4 = v3->RefCount-- == 1; /*0x7d11c2*/
        if ( v4 ) /*0x7d11c6*/
          NiD3DPass_ReleaseToPool(v3); /*0x7d11c8*/
      }
      v5 = *v2; /*0x7d11cd*/
      v4 = *v2 == 0; /*0x7d11cf*/
      g_ShadowLightPassBySelector[i] = (int)*v2; /*0x7d11d1*/
      if ( !v4 ) /*0x7d11d7*/
        ++v5->RefCount; /*0x7d11d9*/
    }
    v6 = v12[0]; /*0x7d11dd*/
    v13 = 0xFFFFFFFF; /*0x7d11e3*/
    if ( v12[0] ) /*0x7d11eb*/
    {
      --v12[0]->RefCount; /*0x7d11ed*/
      if ( !v6->RefCount ) /*0x7d11f6*/
        NiD3DPass_ReleaseToPool(v6); /*0x7d11fb*/
    }
    v7 = g_ShadowLightPassBySelector[i]; /*0x7d1200*/
    v8 = *(_DWORD *)(v7 + 0x58); /*0x7d120b*/
    v9 = (int *)(v7 + 0x58); /*0x7d120e*/
    v10 = unk_B45290[0]; /*0x7d1213*/
    if ( v8 != unk_B45290[0] ) /*0x7d1215*/
    {
      if ( v8 ) /*0x7d1219*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7d121f*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7d1235*/
      }
      *v9 = v10; /*0x7d1239*/
      if ( v10 ) /*0x7d123b*/
        InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x7d1241*/
    }
  }
  sub_820910(); /*0x7d125c*/
  sub_814430(); /*0x7d1263*/
  sub_815DB0(); /*0x7d126a*/
  sub_81AA00(); /*0x7d1271*/
  sub_81B120(); /*0x7d1278*/
  sub_81BCE0(); /*0x7d127f*/
  sub_81D090(); /*0x7d1286*/
  sub_81DC40(); /*0x7d128d*/
  sub_81EA70(); /*0x7d1294*/
  sub_8203D0(); /*0x7d129b*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x7d12a9*/
  {
    sub_81F330(); /*0x7d12f8*/
  }
  else
  {
    ShadowLightShader_InitializeMultiPointPassPool(); /*0x7d12ab*/
    ShadowLightShader_InitializePassPool(); /*0x7d12b2*/
    sub_828280(); /*0x7d12b9*/
    ShadowLightShader_InitializeAdditivePointPassPool(); /*0x7d12c0*/
    sub_832740(); /*0x7d12c7*/
    sub_8357B0(); /*0x7d12ce*/
    sub_836230(); /*0x7d12d5*/
    sub_836810(); /*0x7d12dc*/
    sub_839F90(); /*0x7d12e3*/
    sub_83A7E0(); /*0x7d12ea*/
    sub_839A50(); /*0x7d12f1*/
  }
  return 1; /*0x7d12ff*/
}
