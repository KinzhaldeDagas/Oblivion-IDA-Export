// MoonSugarEffect decode: ParallaxShader pass population slot +0xD4. Populates two pooled passes dword_B476F0..B476F4.
void __thiscall sub_8717B0(volatile LONG **this)
{
  int v2; // esi
  NiD3DTextureStage *v3; // ebx
  int v4; // eax
  bool v5; // zf
  NiD3DTextureStage *v6; // eax
  NiD3DTextureStage *v7; // eax
  int v8; // ebp
  int v9; // edi
  int v10; // ebp
  int v11; // edi
  NiD3DTextureStage **v12; // edi
  NiD3DTextureStage *v13; // eax
  int v14; // ebp
  int v15; // edi
  int v16; // ebp
  int v17; // edi
  NiD3DTextureStage *v19; // [esp+20h] [ebp-10h] BYREF
  unsigned int v20; // [esp+2Ch] [ebp-4h]

  v2 = 0; /*0x8717dd*/
  v3 = 0; /*0x8717e3*/
  v20 = 0; /*0x8717e5*/
  v4 = unk_B476F0; /*0x8717ed*/
  v5 = unk_B476F0 == 0; /*0x8717f2*/
  LOBYTE(v20) = 1; /*0x8717f4*/
  if ( !v5 ) /*0x8717f9*/
  {
    v2 = v4; /*0x8717fb*/
    if ( v4 ) /*0x871803*/
      ++*(_DWORD *)(v4 + 0x60); /*0x871805*/
  }
  if ( !*(_DWORD *)(v2 + 0x18) ) /*0x871809*/
  {
    v6 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v19); /*0x87181e*/
    if ( v6 ) /*0x871822*/
    {
      v3 = v6; /*0x871824*/
      ++v6[7].Unk08; /*0x871826*/
    }
    v7 = v19; /*0x87182e*/
    LOBYTE(v20) = 1; /*0x871834*/
    if ( v19 ) /*0x871839*/
    {
      --v19[7].Unk08; /*0x87183b*/
      if ( !v7[7].Unk08 ) /*0x871844*/
        sub_772560(v7); /*0x871849*/
    }
    BSShader_ConfigureTextureStageSampler(v3, 0, 1, 2); /*0x871855*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v2, *(_DWORD *)(v2 + 0x14), &v3->Stage); /*0x871864*/
  }
  v8 = (int)*(this + 0x43); /*0x871869*/
  v9 = *(_DWORD *)(v2 + 0x58); /*0x87186f*/
  if ( v9 != v8 ) /*0x871874*/
  {
    if ( v9 ) /*0x871878*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x87187e*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x871894*/
    }
    *(_DWORD *)(v2 + 0x58) = v8; /*0x871898*/
    if ( v8 ) /*0x87189b*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x8718a1*/
  }
  v10 = (int)*(this + 0x61); /*0x8718ab*/
  v11 = *(_DWORD *)(v2 + 0x44); /*0x8718b1*/
  if ( v11 != v10 ) /*0x8718b6*/
  {
    if ( v11 ) /*0x8718ba*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x8718c0*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x8718d6*/
    }
    *(_DWORD *)(v2 + 0x44) = v10; /*0x8718da*/
    if ( v10 ) /*0x8718dd*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x8718e3*/
  }
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x8718e9*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8718f4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x1Bu, 1u, 0); /*0x871904*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871909*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871914*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x13u, 9u, 0); /*0x871920*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871925*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871930*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x14u, 1u, 0); /*0x87193b*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871940*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x87194b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0xFu, 0, 0); /*0x871957*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x87195c*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871967*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 7u, 1u, 0); /*0x871972*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871977*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871982*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x17u, 3u, 0); /*0x87198e*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871993*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x87199e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0xEu, 0, 0); /*0x8719aa*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x8719af*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8719ba*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x34u, 0, 0); /*0x8719c6*/
  v5 = v2 == unk_B476F4; /*0x8719cb*/
  unk_B43F54 = 0x20002; /*0x8719d1*/
  unk_B445E4 = 0x100; /*0x8719db*/
  if ( !v5 ) /*0x8719e5*/
  {
    v5 = (*(_DWORD *)(v2 + 0x60))-- == 1; /*0x8719e7*/
    if ( v5 ) /*0x8719eb*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v2); /*0x8719ef*/
    v2 = unk_B476F4; /*0x8719f4*/
    if ( unk_B476F4 ) /*0x8719fc*/
      ++*(_DWORD *)(v2 + 0x60); /*0x871a02*/
  }
  if ( !*(_DWORD *)(v2 + 0x18) ) /*0x871a05*/
  {
    v12 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v19); /*0x871a17*/
    v5 = v3 == *v12; /*0x871a19*/
    LOBYTE(v20) = 3; /*0x871a1b*/
    if ( !v5 ) /*0x871a20*/
    {
      if ( v3 ) /*0x871a24*/
      {
        v5 = v3[7].Unk08-- == 1; /*0x871a26*/
        if ( v5 ) /*0x871a2a*/
          sub_772560(v3); /*0x871a2e*/
      }
      v3 = *v12; /*0x871a33*/
      if ( *v12 ) /*0x871a37*/
        ++v3[7].Unk08; /*0x871a3d*/
    }
    v13 = v19; /*0x871a40*/
    LOBYTE(v20) = 1; /*0x871a46*/
    if ( v19 ) /*0x871a4b*/
    {
      --v19[7].Unk08; /*0x871a4d*/
      if ( !v13[7].Unk08 ) /*0x871a56*/
        sub_772560(v13); /*0x871a5b*/
    }
    BSShader_ConfigureTextureStageSampler(v3, 0, 1, 2); /*0x871a66*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v2, *(_DWORD *)(v2 + 0x14), &v3->Stage); /*0x871a75*/
  }
  v14 = (int)*(this + 0x44); /*0x871a7e*/
  v15 = *(_DWORD *)(v2 + 0x58); /*0x871a84*/
  if ( v15 != v14 ) /*0x871a89*/
  {
    if ( v15 ) /*0x871a8d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x871a93*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x871aa9*/
    }
    *(_DWORD *)(v2 + 0x58) = v14; /*0x871aad*/
    if ( v14 ) /*0x871ab0*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x871ab6*/
  }
  v16 = (int)*(this + 0x61); /*0x871ac0*/
  v17 = *(_DWORD *)(v2 + 0x44); /*0x871ac6*/
  if ( v17 != v16 ) /*0x871acb*/
  {
    if ( v17 ) /*0x871acf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x871ad5*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x871aeb*/
    }
    *(_DWORD *)(v2 + 0x44) = v16; /*0x871aef*/
    if ( v16 ) /*0x871af2*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x871af8*/
  }
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871afe*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871b09*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x1Bu, 1u, 0); /*0x871b15*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871b1a*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871b25*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x13u, 9u, 0); /*0x871b31*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871b36*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871b41*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x14u, 1u, 0); /*0x871b4d*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871b52*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871b5d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0xFu, 0, 0); /*0x871b69*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871b6e*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871b79*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 7u, 1u, 0); /*0x871b85*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871b8a*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871b95*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x17u, 3u, 0); /*0x871ba1*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871ba6*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871bb1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0xEu, 0, 0); /*0x871bbd*/
  if ( !*(_DWORD *)(v2 + 0x30) ) /*0x871bc2*/
    *(_DWORD *)(v2 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x871bcd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v2 + 0x30), 0x34u, 0, 0); /*0x871bd9*/
  unk_B43F58 = 0x60008; /*0x871be3*/
  unk_B445E8 = 0x100; /*0x871bed*/
  LOBYTE(v20) = 0; /*0x871bf7*/
  if ( v3 ) /*0x871bfc*/
  {
    v5 = v3[7].Unk08-- == 1; /*0x871bfe*/
    if ( v5 ) /*0x871c01*/
      sub_772560(v3); /*0x871c05*/
  }
  v5 = (*(_DWORD *)(v2 + 0x60))-- == 1; /*0x871c0a*/
  v20 = 0xFFFFFFFF; /*0x871c0d*/
  if ( v5 ) /*0x871c11*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v2); /*0x871c15*/
}
